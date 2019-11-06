var radiusSlider;
var randomBrushSlider;
var colorPicker;

function setup() {
  createCanvas(400, 400);
  
  createButton("Clear").mousePressed(clear);
  createButton("Save").mousePressed(SaveDrawing);
  createButton("Randomize").mousePressed(randomizePixels);
  
  radiusSlider = createSlider(1,60, 3);
  randomBrushSizeSlider = createSlider(0, 1, 0.2, 0.01);
  randomColorSlider = createSlider(0, 1, 0.2, 0.01);
  
  colorPicker = createColorPicker("#eca1f0");
  
  createButton("Blur").mousePressed(() => filter(BLUR, 20));
  createButton("Randomize").mousePressed()
}


function draw() {

  
    if(mouseIsPressed) {
      var brushSize = radiusSlider.value();
      
      brushSize += random(-15, 15) * randomBrushSizeSlider.value();
      
      
      strokeWeight( brushSize);
      
      var brushColor = colorPicker.color();
      var v = random(-30, 30) * randomColorSlider.value();
      brushColor.setRed( red(brushColor) + v);
      brushColor.setGreen( green(brushColor) + v);
      brushColor.setBlue( blue(brushColor) + v);
      
     // stroke ( colorPicker.color() );
      stroke(brushColor);
      var drawPoint = createVector(mouseX, mouseY);
      drawPoint.x += random(-50, 50);
      drawPoint.y += random(-50,50);
      line(pmouseX, pmouseY, drawPoint.x, drawPoint.y);
  }
}
  

function clear() {
  background(255);
}

function SaveDrawing() {
  saveCanvas('myCanvas', 'png');
}

function randomizePixels() {
 var img = get();
  img.loadPixels();
  
  for(var x = 0; x < width; x++) {
      for(var y = 0; y < height; y++) {
         var pixelColor = color(0,0,0); 
        
        pixelColor.setRed(
          map(sin((x / width) * 20), -1, 1, 0, 255) 
          );
          
        set(x, y, pixelColor);
      }    
  }
  
  updatePixels();
}
