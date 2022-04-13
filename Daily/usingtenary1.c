/**
* Tenary opeartor
*
*/

int main()
{
    int i = 5;
    int j = 2;
    int ans;

    if (i = 5)
        if( j =2)
        {
            ans = 3;
        }
        else
        {
            ans = 5;
        }
    else
    {
        ans = 0;
    }
    printf("%d\n",ans);
}
//itenary operator

int main()
{
    int i = 5;
    int j = 2;
    int ans;

    ans = (i = 5 ? ( j = 2 ? 3 : 5) : 0);
    printf("%d\n",ans);
}