void Run() {
  
  // Diplay Animation
// Run1
display.clearDisplay();
display.drawBitmap(0, 0, Run1, 128, 64, 1);
display.display();
delay(frame_delay);

// Run2
display.clearDisplay();
display.drawBitmap(0, 0, Run2, 128, 64, 1);
display.display();
delay(frame_delay);

// Run3
display.clearDisplay();
display.drawBitmap(0, 0, Run3, 128, 64, 1);
display.display();
delay(frame_delay);

// Run4
display.clearDisplay();
display.drawBitmap(0, 0, Run4, 128, 64, 1);
display.display();
delay(frame_delay);



if (frame_delay>50) frame_delay=frame_delay-20;
loop();  
}