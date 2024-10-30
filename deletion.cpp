#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void deletion(int arr[], int size, int index)
{
    // code for deletion-->
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, index = 1;
    // index the target that will be deleted-->
    display(arr, size);
    deletion(arr, size, index);
    size -= 1;
    cout<<endl<<"new data:"<<endl;
    display(arr, size);
    return 0;
}
            /*      ____.                                       _________.___  __        .___              
                  |    |  ____    ___________     ____        /   _____/|   ||  | __  __| _/ ____ _______ 
                  |    |_/ __ \  /  ___/\__  \   /    \       \_____  \ |   ||  |/ / / __ |_/ __ \\_  __ \
              /\__|    |\  ___/  \___ \  / __ \_|   |  \      /        \|   ||    < / /_/ |\  ___/ |  | \/
              \________| \___  >/____  >(____  /|___|  /     /_______  /|___||__|_ \\____ | \___  >|__|   
                             \/      \/      \/      \/              \/           \/     \/     \/        */
