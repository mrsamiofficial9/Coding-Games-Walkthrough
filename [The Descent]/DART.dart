import 'dart:io';

String readLineSync() {
  String? s = stdin.readLineSync();
  return s == null ? '' : s;
}
void main() {
    while (true) {
      int h_h = 0;
      int h_m = 0;
      for (int i = 0; i < 8; i++) {
        int mountainH = int.parse(readLineSync());
        if(h_h < mountainH){
          h_h = mountainH;
          h_m = i;
        }
      }

        print(h_m); 
    }
}
