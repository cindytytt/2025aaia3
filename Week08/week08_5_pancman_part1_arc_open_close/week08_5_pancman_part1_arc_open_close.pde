//week08-5_pancman_part1_arc_open_close
void setup(){
  size(400,500);
}
int x =200,y=250;
float m=0,dm=0.02;
void draw(){
  background(0);
  fill(255, 255, 0);
  arc(x,y,30,30,m,PI*2-m);
  m += dm;
  if(m>1|| m<0)dm =-dm;
}
