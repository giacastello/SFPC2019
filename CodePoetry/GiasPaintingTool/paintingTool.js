let slider;
let buttonPink;
let buttonBlue;
let buttonGreen;
let paintColor;



function setup() {
  // put setup code here
  createCanvas(700, 700);
  createButton("Save Painting").mousePressed(saveDrawing);

  slider = createSlider(10, 100, 100);
  slider.position(10, 10);
  slider.style('width', '80px');

  buttonPink = createButton("");
  buttonBlue = createButton("");
  buttonGreen = createButton("");

  buttonPink.position(10, 100);
  buttonBlue.position(10, 200);
  buttonGreen.position(10, 300);

  buttonPink.style('background-color', "rgb(250, 142, 232)");
  buttonPink.style('min-height' , "5vw");
  buttonPink.style('min-width' , "5vw");

  buttonBlue.style('background-color', "rgb(57, 85, 179)");
  buttonBlue.style('min-height' , "5vw");
  buttonBlue.style('min-width' , "5vw");
  

  buttonGreen.style('background-color', "rgb(60, 232, 201)");
  buttonGreen.style('min-height' , "5vw");
  buttonGreen.style('min-width' , "5vw");

  buttonPink.mousePressed(paintPink);
  buttonBlue.mousePressed(paintBlue);
  buttonGreen.mousePressed(paintGreen);
}

function draw() {
  noStroke();
  // put drawing code here
  // background(255);
  let diameter = slider.value();

  if (mouseIsPressed) {
    fill(paintColor);
    ellipse(mouseX, mouseY, diameter);
  } else {
  }
}

function paintPink() {
  paintColor = color(250, 142, 232);
}

function paintBlue() {
  paintColor = color(57, 85, 179);
}

function paintGreen() {
  paintColor = color(60, 232, 201);
}

function saveDrawing() {
  saveCanvas("dibujito", "png");
}