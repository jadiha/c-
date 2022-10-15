#include <iostream>

using namespace std;

void instructions();
int menu();
void draw_shape(int choice);
int get_size();
char get_char();
void draw_triangle(int size, char c);
void draw_diamond(int size, char c);
void draw_sideways(int size, char c);
void draw_bottom(int size, char c);

int main()
{
    int choice;

    instructions();
    choice = menu();
    if (choice == 3)
    {
        cout << "You chose to quit. Goodbye! \n";
        return 0;
    }

    draw_shape(choice);

    return 0;
}

void instructions()
{
    cout << "Welcome! This program allows you to build a traingle or diamond\n";
    cout << "Enter 1 for Triangle. 2 for Diamond. 3 to quit. ";
}

int menu()
{
    int choice;
    cout << "\nEnter your choice: ";
    cin >> choice;
    return choice;
}

void draw_shape(int choice)
{
    int size;
    char c;
    int choice1;
    size = get_size();
    c = get_char();

    if (choice == 1)
    {
        cout << "Would you like to draw a normal or upside down or sideways triangle?";
        cout << "\nEnter 1 for normal, 2 for upside down and 3 for sideways: ";
        cin >> choice1;
        if (choice1 == 1)
        {
            draw_triangle(size, c);
        }
        else if (choice1 == 2)
        {
            draw_bottom(size, c);
        }
        else if (choice1 == 3)
        {
            draw_sideways(size, c);
        }
    }
    else if (choice == 2)
    {
        draw_diamond(size, c);
    }
}

int get_size()
{
    int size;
    cout << "What would you like the size of your shape to be? ";
    cin >> size;
    return size;
}

char get_char()
{
    char c;
    cout << "What character would you like to use? ";
    cin >> c;
    return c;
}

void draw_diamond(int size, char c)
{
    draw_triangle(size, c);
    draw_bottom(size, c);
}

void draw_triangle(int size, char c)
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << c;
        }
        for (int l = i - 1; l >= 1; l--)
        {
            cout << c;
        }
        cout << "\n";
    }
}

void draw_sideways(int size, char c)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << c;
        }
        cout << "\n";
    }
    for (int i = size - 2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << c;
        }
        cout << "\n";
    }
}

void draw_bottom(int size, char c)
{
    for (int i = size; i >= 1; --i)
    {
        for (int j = 0; j < size - i; ++j)
            cout << " ";

        for (int j = i; j <= 2 * i - 1; ++j)
            cout << c;

        for (int j = 0; j < i - 1; ++j)
            cout << c;
        cout << endl;
    }
}
