//Fibonacci Series
int main()
{
    int n = 10;
    int first = 0;
    cout<<first<<",";
    int second = 1;
    cout<<second<<",";
    int next = first + second;
    while(next <= n) {
        cout<<next<<",";
        first = second;
        second = next;
        next = first + second;
    }
    return 0;
}