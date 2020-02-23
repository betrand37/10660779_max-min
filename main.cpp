 #include<iostream>

    using namespace std;

    int main ()

    {

        int arr[ ], n, i, max, min;

        cout << "Enter the size of the array : ";

        cin >> n;

        cout << "Enter the values of the array : ";

        for (i = 0; i < n; i++)

            cin >> arr[i];

        max = arr[0];

        for (i = 0; i < n; i++)

        {

            if (max < arr[i])

                max = arr[i];

        }

        min = arr[0];

        for (i = 0; i < n; i++)

        {

            if (min > arr[i])

                min = arr[i];

        }

        cout << "maximum element : " << max;

        cout << "minimum element : " << min;

        return 0;

    }
