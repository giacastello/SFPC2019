# this allows you to walk around my journies

export ROOT=$(pwd)

home() {
  builtin cd $ROOT
}

transit() {
  if [ -e $1.sh ]
  then
    echo '~~ whoosh ~~'
    source $1.sh
  else
    echo "Journey: $JOURNEY"
    builtin cd $@;
  fi
  if [ -f map.txt ]
  then
    echo '~~~~ map ~~~~~'
    cat map.txt
  fi
  if [[ $(pwd) = $ROOT ]]
  then
    export JOURNEY=''
  fi
  if [[ $(pwd) = $ROOT* ]]
  then
    export JOURNEY=$JOURNEY:${pwd#$ROOT}
    echo 'in tree'
  fi
}

esc=$(printf '\033')

lsnew() {
  /bin/ls -G | sed -e "s/^\(.*\).sh$/${esc}[31m\1${esc}[0m/g" | sed -e "s/^\(.*\).txt$/${esc}[33m\1.txt${esc}[0m/g"
}

if [ -z "$ALIASED" ]
then
  echo 'setup'
  alias cd='echo "please use transit! cding anyways";cd'
  alias ls='lsnew'
  export ALIASED=true
else
  echo 'already setup'
fi

