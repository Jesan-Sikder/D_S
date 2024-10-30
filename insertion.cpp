#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
void display(int arr[], int n)
{
    //traversal korsi --> mainlyshob ghor gula visit korsi
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
   

    }
    cout<<endl;
}
int sorted_insrtion(int arr[],int size,int element,int capacity,int index){
    //preparing for insertion
    if (size>=capacity)
    {
        return -1;
    }
    
     for (int  i = size-1; i >=index; i--){
        arr[i+1]=arr[i];
     }
     arr[index]=element;
     return 1;

}
int main()
{
    int element = 45, size = 5,index=3,capacity=100;


    int arr[100] = {7,8,12,27,88};
    display(arr, size);
    sorted_insrtion(arr,size,element,capacity,index);
    size+=1;//size barailam karon ekta element barlo
cout<<"new sequnce is= "<<endl;
    display(arr,size);
    return 0;
}




// understanding the output 3<<           ------> output is 3     and 2 is not acceptable
// #include <stdio.h>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int size=4,index=3;
//     for (int  i = size-1; i >=index; i--)
//     {
//         cout<<i<<endl;
//     }
    
// }
            /*      ____.                                       _________.___  __        .___              
                  |    |  ____    ___________     ____        /   _____/|   ||  | __  __| _/ ____ _______ 
                  |    |_/ __ \  /  ___/\__  \   /    \       \_____  \ |   ||  |/ / / __ |_/ __ \\_  __ \
              /\__|    |\  ___/  \___ \  / __ \_|   |  \      /        \|   ||    < / /_/ |\  ___/ |  | \/
              \________| \___  >/____  >(____  /|___|  /     /_______  /|___||__|_ \\____ | \___  >|__|   
                             \/      \/      \/      \/              \/           \/     \/     \/        */
