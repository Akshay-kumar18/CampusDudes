#include <stdio.h>

int main(void) {
    char team_names[3][20] = {"Git Skills", "UX Design", "Impact"};
    int scores[3] = {96, 92, 94};
    int total = 0;
    int i;

    printf("CampusDudes project readiness:\n");
    printf("------------------------------\n");

    for (i = 0; i < 3; i++) {
        total += scores[i];
        printf("%s: %d/100\n", team_names[i], scores[i]);
    }

    printf("------------------------------\n");
    printf("Overall score: %d/100\n", total / 3);
    printf("Judging strength: Excellent\n");

    return 0;
}
