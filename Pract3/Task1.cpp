#include <iostream>
using namespace std;

int main() {
    int capacity;
    cout << "Введите количество задач: ";
    cin >> capacity;

    int* tasks = new int[capacity];

    int count = 0;
    int choice;
    int id;

    do {
        cout << "\n=== Менеджер задач ===\n";
        cout << "1. Добавить задачу\n";
        cout << "2. Удалить задачу\n";
        cout << "3. Просмотреть все задачи\n";
        cout << "4. Выход\n";
        cout << "Выберите действие: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                if (count >= capacity) {
                    cout << "Нельзя добавить новую задачу — достигнут лимит (" << capacity << ").\n";
                    break;
                }

                cout << "Введите ID задачи: ";
                cin >> id;

                bool exists = false;
                for (int i = 0; i < count; i++)
                    if (tasks[i] == id) exists = true;

                if (exists)
                    cout << "Такая задача уже существует!\n";
                else {
                    tasks[count++] = id;
                    cout << "Задача добавлена!\n";
                }
                break;
            }
            case 2: {
                cout << "Введите ID задачи для удаления: ";
                cin >> id;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (tasks[i] == id) {
                        for (int j = i; j < count - 1; j++)
                            tasks[j] = tasks[j + 1];
                        count--;
                        found = true;
                        cout << "Задача удалена!\n";
                        break;
                    }
                }
                if (!found) cout << "Задача с таким ID не найдена!\n";
                break;
            }
            case 3: {
                if (count == 0)
                    cout << "Список задач пуст!\n";
                else {
                    cout << "Список задач: ";
                    for (int i = 0; i < count; i++)
                        cout << tasks[i] << " ";
                    cout << "\n";
                }
                break;
            }
            case 4:
                cout << "Выход из программы...\n";
                break;
            default:
                cout << "Неверный выбор!\n";
        }

    } while (choice != 4);

    delete[] tasks;
    return 0;
}
