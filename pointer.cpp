#include<bits/stdc++.h>
int main(){
    int* p= new int;   // in c++ using new it will create bucket in heap memory|| weather in c we use malloc fn(but it return void pointer) to create memmory in heap
    *p=15;
    std::cout<<p<<*p;    //here using *p we access value it is dereffrencing

//how to de-allocate heap memory in c lang??
    //free   this is a fn in c lang which help to de-allocate memory in heap
//how to de-allocate heap memory in c++ lang??
    //delete operator

    delete p;

    //what is dangling pointer??
         // A pointer was pointing something but now it is deleted or free is dangling pointer
         // like what we did with p
         std::cout<<p<<*p; 
    // void pointer?? --> no associated data type.
    //what is NULL poiner??--> which point nothing.

      //you can create array in stack and heap both;
     // create array in heap-->
        int* a = new int[10];
        a[0]=1;
        a[1]=2;
        a[3]=3;
        // if we delete like this 
        delete a;   //it will delete only base(0th) index
        
        delete [] a;   //it will delete whole array from heap

        // using calloc in heap
           int* calloc_arr=(int*)calloc(5,sizeof(int));   //calloc is returning void pointer so we wrote (int*)to convert int
           calloc_arr[0]=2;
           calloc_arr[1]=5;
           calloc_arr[2]=4;

          // you can create struct and class in heap also
            struct test{
                    int x;
                    void display(){
                        std::cout<<"\nhello world\n";
                    }
            };
             test t1 ;    // this is create inside array
             test* t= new test;        // this will create in heap
            //  *(t).display(); 
            t->display(); 
            std::cout<<sizeof(a)<<"\n";

    
           //SMART POINTER
             /* till now we manually free memory using delete every time
              because we dont have garbage collecter like JAVA
              -- smart pointer encapsulate pointer and provide additional such as memory management
              "automatic memory managment"
              these pointer is define in <memory> header file
              we have to include it for automatic memory managment

            DIFFRENT TYPE OF SMART POINTER-->
            1.  Unique pointer(this smart pointer will only permit one owner of the pointer)
            
            2.  shared pointer(this pointer allow multiple owner of memory space)
            3.   weak pointer

       */
      std::unique_ptr<int> ptr1(new int (103));
      std::cout<<*ptr1<<"\n";

      struct temp{
          int x;
           temp(){
               std::cout<<"constructor called";
           }
           ~temp(){
               std::cout<<"distructor is called";
           }
      };
         //   temp *l1=new temp();     //memory is created
         //   delete l1;           //memory is free manually
    /* std::unique_ptr<temp>l1(new temp()); */ //here when we crated unique pointer it created memory but when see 
    // it is not used automatic free memory;  thats why output is constructor is called and distructor is called
     /* std::unique_ptr<temp>l2=l1;*/ // it will give error because it is unique pointer thats why shared pointer come into picture
      std::shared_ptr<temp>l1(new temp());  
      std::shared_ptr<temp>l2=l1;    //no error is coming means one memory addres can have multiple owner
      //l2.use_count  gives us how many pointer point to single address
        return 0;
}
