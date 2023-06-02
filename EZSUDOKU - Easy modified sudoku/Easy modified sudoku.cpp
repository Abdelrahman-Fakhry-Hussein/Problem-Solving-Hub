

#include <iostream>

using namespace  std;
int  arr[8][8];



int flag;

bool check_bloack(int x, int y)
{
    int ind = x / 4;
    int ind2 = y / 4;
    int F[9];

    for (int y = 0; y <= 8; y++)
        F[y] = 0;
    for (int i = ind * 4; i < ind * 4 + 4; i++)
    {
        for (int y = ind2 * 4; y < ind2 * 4 + 4; y++)
        {
            if (arr[i][y] == 0)continue;
            F[arr[i][y]]++;
            if (F[arr[i][y]] > 2)
                return true;
        }
    }
    return false;

}




int check_row_col(int x, int y)
{
    int F[9];
    int F2[9];

    for (int y = 0; y <= 8; y++)
    {
        F[y] = 0;
        F2[y] = 0;
    }

    for (int i = 0; i < 8; i++)
    {
        if (arr[x][i] == 0)continue;
        F[arr[x][i]]++;
        if (F[arr[x][i]] > 1)
            return 1;
    }
    for (int i = 0; i < 8; i++)
    {
        if (arr[i][y] == 0)continue;
        F2[arr[i][y]]++;
        if (F2[arr[i][y]] > 1)
            return  1;
    }


    return 0;
}

int check_full_row_col()
{
    for (int i = 0; i < 8; i++)
        if (check_row_col(i, i) ==1)return 1;
    return 0;
}

void recu(int x, int y)
{
    if (x >= 8)
    {
        flag = 1;
        return;
    }
   
    if (arr[x][y] != 0)
    {
        if (y < 7)recu(x, y + 1);
        else recu(x + 1, 0);
    }
    else
    {
        for (int i = 1; i < 9; i++)
        {
            arr[x][y] = i;
                if (!check_row_col(x, y) && !check_bloack(x, y))
                {
                    if (y < 7)recu(x, y + 1);
                    else recu(x + 1, 0);
                }
                if (flag == 1)return;
                arr[x][y] = 0;
        }
    }
    }




int main()
{
    int n = 0;
    cin >> n;
    int v = 1;
    while (v <= n)
    {

        int startx = -1, starty = -1;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> arr[i][j];

                if (arr[i][j] == 0 && startx == -1)
                {
                    startx = i;
                    starty = j;
                }
          

            }
        }
        flag = 0;
        if (!check_bloack(0, 0) && !check_bloack(0, 4) && !check_bloack(4, 0) && !check_bloack(4, 4) && !check_full_row_col())
        {
            recu(startx, starty);
            if (flag)
            {
                printf("Test case #%d: YES\n", v);
                for (int i = 0; i < 8; i++)
                {
                    for (int j = 0; j < 8; j++)
                        printf("%d ", arr[i][j]);
                    printf("\n");
                }
            }
            else printf("Test case #%d: NO\n", v);
        }
        else printf("Test case #%d: NO\n", v);
        v++;

    }

    return 0;
}



