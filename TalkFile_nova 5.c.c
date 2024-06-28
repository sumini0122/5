#include <stdio.h>

int main(void) {
printf("현재 시간을 입력하세요:");
int H, M;
scanf("%d시%d분", &H, &M);
if (M<45) {
    if (H==13) {
      H = H - 1;
      M = M + 60 - 45;
      printf("오후%d시%d분입니다.", H, M);
    }
    else if (H==0) {
      H = 23;
      M = M + 60 -45;
      printf("오후%d시%d분입니다.", H, M);
    }
    else if (H<13) {
      H = H - 1;
      M = M + 60 - 45;
      printf("오전%d시%d분입니다.", H, M);
    }
    else if (H>13) {
      H = H - 13;
      M = M + 60 - 45;
      printf("오후%d시%d분입니다.", H, M);
    }
  }
  else if (M>45) {
    if (H==0) {
      M = M - 45;
      printf("오전%d시%d분입니다.", H, M);
    }
    else if (H<=12) {
      M = M - 45;
      printf("오전%d시%d분입니다.", H, M);
    }
    else if (H>12) {
      H = H - 13;
      M = M - 45;
      printf("오후%d시%d분입니다.", H, M);
    }
  }
  return 0;
}