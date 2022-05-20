PShape gundam;
void setup(){
  size(500,500,P3D);
  gundam=loadShape("Gundam.obj");
}
void draw(){
  background(#FFC1F9);
  translate(250,500);
  scale(18,-18,18);
  rotateY(radians(frameCount));
  shape(gundam);
}
