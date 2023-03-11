#include <stdio.h>

int main()
{
#ifndef ONLINE_JUDGE
    freopen("ET_small.txt", "r", stdin);
    freopen("output_small.txt", "w", stdout);
#endif
        float t, n, total, r, s, h;
        scanf("%f", &t);
        while (t--)
        {
            scanf("%f", &n);
            float accent_color = 0, regular_color = 0, hour = 0;
            for (int i = 0; i < n; i++)
            {
                scanf("%f %f %f %f", &total, &r, &s, &h);

                float total_walls = 6 * h + 4 * s + 3 * r;

                accent_color = accent_color + (float)(total_walls / 3) * (1.5);
                regular_color = regular_color + (float)((2 * total_walls) / 3) * (2.25);
                hour = hour + (total_walls / 3) * 2.5 + ((2 * total_walls) / 3) * 3.25;
            }
            printf("%0.2f,", hour);
            printf("%0.2f,", accent_color);
            printf("%0.2f\n", regular_color);
        }
}