include stdio.h
include math.h

void main() {
  printf("Testing only");
  int a = 1;
  int b = 3;
  int count = (a + b) - (a - b);
  int multiple = (a * b) / (a * b);
  printf("Tong cong la: %x", count);
  printf("Phep nhan la: %x", multiple);
  endl();
}
