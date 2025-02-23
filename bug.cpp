int main() {
  int* ptr = nullptr; 
  *ptr = 10; // This will cause a segmentation fault
  return 0; 
}