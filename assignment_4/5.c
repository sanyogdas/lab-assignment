#include <stdio.h>

// Function declarations
void rightHalfPyramid();
void leftHalfPyramid();
void fullPyramid();
void invertedRightHalfPyramid();
void invertedLeftHalfPyramid();
void invertedFullPyramid();
void rhombusPyramid();
void diamondPyramid();
void hourglassPyramid();
void hollowSquarePyramid();
void hollowFullPyramid();
void hollowInvertedFullPyramid();
void hollowDiamondPyramid();
void floydsTriangle();
void pascalsTriangle();

int main() {
    int choice;

    do {
        printf("\n=== PATTERN PRINTING MENU ===\n");
        printf("1.  Right Half Pyramid\n");
        printf("2.  Left Half Pyramid\n");
        printf("3.  Full Pyramid\n");
        printf("4.  Inverted Right Half Pyramid\n");
        printf("5.  Inverted Left Half Pyramid\n");
        printf("6.  Inverted Full Pyramid\n");
        printf("7.  Rhombus Pyramid\n");
        printf("8.  Diamond Pyramid\n");
        printf("9.  Hourglass Pyramid\n");
        printf("10. Hollow Square Pyramid\n");
        printf("11. Hollow Full Pyramid\n");
        printf("12. Hollow Inverted Full Pyramid\n");
        printf("13. Hollow Diamond Pyramid\n");
        printf("14. Floyd's Triangle\n");
        printf("15. Pascal's Triangle\n");
        printf("0.  Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {
            case 1:  rightHalfPyramid(); break;
            case 2:  leftHalfPyramid(); break;
            case 3:  fullPyramid(); break;
            case 4:  invertedRightHalfPyramid(); break;
            case 5:  invertedLeftHalfPyramid(); break;
            case 6:  invertedFullPyramid(); break;
            case 7:  rhombusPyramid(); break;
            case 8:  diamondPyramid(); break;
            case 9:  hourglassPyramid(); break;
            case 10: hollowSquarePyramid(); break;
            case 11: hollowFullPyramid(); break;
            case 12: hollowInvertedFullPyramid(); break;
            case 13: hollowDiamondPyramid(); break;
            case 14: floydsTriangle(); break;
            case 15: pascalsTriangle(); break;
            case 0:  printf("Exiting program. Goodbye!\n"); break;
            default: printf("Invalid choice! Please enter a number between 0 and 15.\n");
        }
    } while (choice != 0);

    return 0;
}

// 1. Right Half Pyramid
void rightHalfPyramid() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
}

// 2. Left Half Pyramid
void leftHalfPyramid() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) printf("  ");
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
}

// 3. Full Pyramid
void fullPyramid() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) printf(" ");
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
}

// 4. Inverted Right Half Pyramid
void invertedRightHalfPyramid() {
    int n = 5;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
}

// 5. Inverted Left Half Pyramid
void invertedLeftHalfPyramid() {
    int n = 5;
    for (int i = n; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++) printf("  ");
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
}

// 6. Inverted Full Pyramid
void invertedFullPyramid() {
    int n = 5;
    for (int i = n; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++) printf(" ");
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
}

// 7. Rhombus Pyramid
void rhombusPyramid() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s < i; s++) printf(" ");
        for (int j = 1; j <= n - 1; j++) printf("* ");
        printf("\n");
    }
}

// 8. Diamond Pyramid
void diamondPyramid() {
    int n = 4;
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) printf(" ");
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++) printf(" ");
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
}

// 9. Hourglass Pyramid
void hourglassPyramid() {
    int n = 4;
    for (int i = n; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++) printf(" ");
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
    for (int i = 2; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) printf(" ");
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
}

// 10. Hollow Square Pyramid
void hollowSquarePyramid() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
}

// 11. Hollow Full Pyramid
void hollowFullPyramid() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) printf(" ");
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
}

// 12. Hollow Inverted Full Pyramid
void hollowInvertedFullPyramid() {
    int n = 5;
    for (int i = n; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++) printf(" ");
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
}

// 13. Hollow Diamond Pyramid
void hollowDiamondPyramid() {
    int n = 4;
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) printf(" ");
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++) printf(" ");
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
}

// 14. Floyd's Triangle
void floydsTriangle() {
    int n = 4, num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) printf("%d ", num++);
        printf("\n");
    }
}

// 15. Pascal's Triangle
void pascalsTriangle() {
    int n = 4;
    for (int i = 0; i < n; i++) {
        for (int s = 1; s < n - i; s++) printf(" ");
        int val = 1;
        for (int j = 0; j <= i; j++) {
            printf("%d ", val);
            val = val * (i - j) / (j + 1);
        }
        printf("\n");
    }
}
