#include <iostream>
using namespace std;

int queue[100], n = 100, front = - 1, rear = - 1;

void push() {
   int val;
   if (rear == n - 1)
   cout<<"Tràn hàng đợi"<<endl;
   else {
      if (front == - 1)
      front = 0;
      cout<<"Chèn phần tử vào hàng đợi : "<<endl;
      cin>>val;
      rear++;
      queue[rear] = val;
   }
}
void pop() {
   if (front == - 1 || front > rear) {
      cout<<"Không thể xóa phần tử trong hàng đợi ";
      return ;
   }
   else {
      cout<<"Phần tử đã xóa khỏi hàng đợi là: "<< queue[front] <<endl;
      front++;;
   }
}

void print() {
   if (front == - 1)
   cout<<"Hàng đợi rỗng!!"<<endl;
   else {
      cout<<"Các phần tử trong hàng đợi là: ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}
/* hàm main để tạo menu và gọi các hàm đã tạo ở trên */
int main() {
   int ch;
   cout<<"1) Thêm phần tử vào Queue"<<endl;
   cout<<"2) Xóa phần tử khỏi Queue"<<endl;
   cout<<"3) Hiện thị tất cả các phần tử trong Queue"<<endl;
   cout<<"4) Thoát"<<endl;
   do {
      cout<<"Nhập lựa chọn của bạn: "<<endl;
      cin>>ch;
      switch (ch) {
         case 1: push();
         break;
         case 2: pop();
         break;
         case 3: print();
         break;
         case 4: cout<<"Kết thúc"<<endl;
         break;
         default: cout<<"Lựa chọn của bạn không đúng"<<endl;
      }
   } while(ch!=4);

   cout<<"\n--------------------------\n";
   cout<<"Chương trình này được đăng tại Freetuts.net";
}
