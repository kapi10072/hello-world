int* createArray(int size)
{
    return new int[size];
}
 
int main()
{
    int* myArray = createArray(5);
    // odwo�ujesz si� do myArray jak do zwyk�ej tablicy: myArray[n]
    delete [] myArray;
    return 0;
}
