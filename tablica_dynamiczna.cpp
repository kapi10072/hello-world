int* createArray(int size)
{
    return new int[size];
}
 
int main()
{
    int* myArray = createArray(5);
    // odwo³ujesz siê do myArray jak do zwyk³ej tablicy: myArray[n]
    delete [] myArray;
    return 0;
}
