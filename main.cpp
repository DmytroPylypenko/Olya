#include <iostream>
#include <vector>
#include <Windows.h>
#include "touristGroup.h"

using namespace std;
using namespace objects;


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    vector<VacationingTourist> vacationingTourists;
    vector<CargoTourist> cargoTourists;
    vector<ChildTourist> childTourists;

    cargoTourists.emplace_back(
        CargoTourist(
            "Целевич Йосип", 26, 0,
            "Хеліос", "Шоп-тур", 24.07, 27.07, "Одяг", "Літо", 62735, "Круг", "Синій", 1, 2, "ДжойнАп",
            1, 6254, 0.045, "Сувеніри"
        )
    );



    vacationingTourists.emplace_back(
        VacationingTourist(
            "Міцкевич Світлана", 54, 1,
            "Пелікан", "Відпочинок", 13.06, 18.06, "Ейфелева вежа", "Одяг", "Літо", 48675, "Квадрат", "Жовтий", 2, 5, "АнексТур",
            2, 1234, 0.056
        )
    );


    childTourists.emplace_back(
        ChildTourist(

            "Скрипка Степан", 12, 0,
            "Медічі", "Діти", 0, 0, "", "Осінь", 66444, "Трикутник", "Зелений", 0, 2, "КоралТревел",
            3, 0.0, 0.012 
        )
    );


    vacationingTourists.emplace_back(
        VacationingTourist(


            "Кохман Юлія", 75, 1,
            "Медічі", "Відпочинок", 12.01, 16.01, "Ейфелева вежа", "Їжа", "Зима", 66444, "Круг", "Жовтий", 1, 1, "Анекс Тур",
            2, 6574, 0.042
        )
    );


    cargoTourists.emplace_back(
            CargoTourist(


            "Дочман Артем", 25, 0,
            "Пелікан", "Шоп-тур", 11.06, 16.06, "Годинники", "Зима", 22222, "Квадрат", "Зелений", 1, 1, "ДжойнАп",
            3, 7432, 0.016, "Сувеніри"

        )
    );

    vacationingTourists.emplace_back(
        VacationingTourist(


            "Мирна Любов", 42, 1,
            "Хеліос", "Відпочинок", 08.06, 14.06, "Лувр", "Прикраси", "Весна", 62735, "Трикутник", "Синій", 3, 4, "СтоПунд",
            1, 6514, 0.065
        )
    );
    cargoTourists.emplace_back(
        CargoTourist(


            "Крупа Максим", 74, 0,
            "Пелікан", "Шоп-тур", 09.09, 14.09, "Годинники", "Осінь", 66444, "Квадарт", "Зелений", 1, 7, "ДжойнАп",
            2, 4657, 0.004, "Сувеніри"
        )
    );


    childTourists.emplace_back(
        ChildTourist(

            "Рибна Катерина", 14, 1,
            "Медічі", "Діти", 0, 0, "", "Весна", 22222, "Круг", "Жовтий", 0, 5, "КоралТревел",
            4, 0.0, 0.078
        )
    );


    vacationingTourists.emplace_back(
        VacationingTourist(


            "Трикутна Дарина", 18, 1,
            "Хеліос", "Відпочинок", 16.05, 18.05, "Музей вина", "Одяг", "Весна", 66444, "Трикутник", "Зелений", 1, 3, "СтоПунд",
            3, 456, 0.012
        )
    );


    cargoTourists.emplace_back(
        CargoTourist(


            "Вакарчук Святослав", 42, 0,
            "Пелікан", "Шоп-тур", 16.06, 18.06, "Годинники", "Літо", 22222, "Квадрат", "Зелений", 2, 3, "АнексТур",
            4, 608, 0.011, "Сувеніри"
        )
    );


    cargoTourists.emplace_back(
        CargoTourist(


            "Григоренко Григорій", 81, 0,
            "Хеліос", "Шоп-тур", 16.07, 18.07, "Одяг", "Літо", 62735, "Трикутник", "Зелений", 1, 3, "КоралТревел",
            4, 909, 0.010, "Сувеніри"
        )
    );


    vacationingTourists.emplace_back(
        VacationingTourist(


            "Тарасенко Василина", 32, 1,
            "Пелікан", "Відпочинок", 12.01, 16.01, "Музей вина", "Прикраси", "Зима", 48675, "Трикутник", "Зелений", 1, 5, "КоралТревел",
            2, 890, 0.005
        )
    );


    vacationingTourists.emplace_back(
        VacationingTourist(


            "Ектор Браво", 18, 0,
            "Медічі", "Відпочинок", 26.09, 28.09, "Ейфелева вежа", "Одяг", "Осінь", 48675, "Квадрат", "Жовтий", 1, 3, "ДжойнАп",
            1, 122, 0.012
        )
    );


    cargoTourists.emplace_back(
        CargoTourist(


            "Соловій Христина", 28, 1,
            "Хеліос", "Шоп-тур", 21.05, 28.05, "Прикраси", "Весна", 62735, "Круг", "Синій", 1, 3, "ДжойнАп",
            3, 528, 0.08, "Сувеніри"
        )
    );

    vacationingTourists.emplace_back(
        VacationingTourist(


            "Червона Розалія", 24, 1,
            "Пелікан", "Відпочинок", 14.05, 20.05, "Музей вина", "Одяг", "Весна", 62735, "Трикутник", "Зелений", 2, 3, "АнексТур",
            3, 4560, 0.09
        )
    );


    vector<Agency> agencies;

    auto agency = Agency("ДжойнАп", 5);

    agency.getExcursions().emplace_back("Ейфелева вежа");
    agency.getExcursions().emplace_back("Лувр");
    agency.getExcursions().emplace_back("Музей вина");
    agency.setPopular("Ейфелева вежа, Лувр");

    agencies.emplace_back(agency);


    agency = Agency("КоралТревел", 3);

    agency.getExcursions().emplace_back("Ейфелева вежа");
    agency.getExcursions().emplace_back("Музей вина");
    agency.getExcursions().emplace_back("Вісла");
    agency.setPopular("Музей вина, Вісла");

    agencies.emplace_back(agency);



    agency = Agency("АнексТур", 4);

    agency.getExcursions().emplace_back("Ейфелева вежа");
    agency.getExcursions().emplace_back("Лувр");
    agency.setPopular("Ейфелева вежа");

    agencies.emplace_back(agency);

    agency = Agency("Стопунд", 1);

    agency.getExcursions().emplace_back("Музей вина");
    agency.getExcursions().emplace_back("Лувр");
    agency.getExcursions().emplace_back("Вісла");
    agency.setPopular("Музей вина, Лувр, Вісла");

    agencies.emplace_back(agency);


    vector<Plane> planes;


    planes.emplace_back(
        Plane(
            62735,
            3.3,
            15,
            48
        )
    );


    planes.emplace_back(
        Plane(
            48675,
            5.2,
            18,
            12
        )
    );


    planes.emplace_back(
        Plane(
            66444,
            2.2,
            8,
            4
        )
    );

    planes.emplace_back(
        Plane(
            22222,
            2.4,
            6,
            8
        )
    );


    Storage storage(45555, 45, 12, 57, 16);

    vector <Firm> firms;

    firms.emplace_back(
        Firm(
            62735,
            4783,
            1234.2,
            5694.405,
            5489303.1,
            39483.1,
            26543.1,
            2920399.1,
            34567.1,
            "Літо",
            "ДжойнАп"
        )
    );


    firms.emplace_back(
        Firm(
            48675,
            2345,
            2234.2,
            6934.405,
            43943.1,
            25623.1,
            23443.1,
            893038.1,
            29374.1,
            "Осінь",
            "АнексТур"
        )
    );


    firms.emplace_back(
        Firm(
            66444,
            2367,
            3234.2,
            5804.405,
            20388.1,
            25623.1,
            98443.1,
            47399.1,
            96787.1,
            "Зима",
            "СтоПунд"
        )
    );

    firms.emplace_back(
        Firm(
            22222,
            8976,
            4234.2,
            5694.405,
            3399303.1,
            10823.1,
            765843.1,
            90399.1,
            43537.1,
            "Весна",
            "КоралТревел"
        )
    );

    TouristGroup touristGroup("/* тут напиши назву */", vacationingTourists, cargoTourists, childTourists, agencies, planes, firms);

    bool running = true;

    while (running)
    {
        system("cls");

        cout << " ______________________________________________________________ " << std::endl
            << "|          АІС ТУРИСТИЧНОЇ ФІРМИ В ЗАРУБІЖНІЙ КРАЇНІ            |" << std::endl
            << "|_______________________________________________________________|" << std::endl
            << " _______________________________________________________________ " << std::endl
            << "|                        Виберіть опцію:                        |" << std::endl
            << "|_______________________________________________________________|" << std::endl
            << "|                      [1] Список туристів                      |" << std::endl
            << "|_______________________________________________________________|" << std::endl
            << "|   [2] Списки на розселення туристів за вказаними готелями     |" << std::endl
            << "|_______________________________________________________________|" << std::endl
            << "|       [3] Списки туристів, які відвідали Францію              |" << std::endl
            << "|_______________________________________________________________|" << std::endl
            << "|              [4] Відомості про конкретного туриста            |" << std::endl
            << "|_______________________________________________________________|" << std::endl
            << "| [5] Список готелів, у яких проводиться розселення туристів    |" << std::endl
            << "|_______________________________________________________________|" << std::endl
            << "|   [6] Загальна кількість туристів, які замовили екскурсії     |" << std::endl
            << "|_______________________________________________________________|" << std::endl
            << "|[7]Найпопулярніші екскурсії і найякісніші екскурсійні агентства|" << std::endl
            << "|_______________________________________________________________|" << std::endl
            << "|             [8] Дані про завантаження рейсу                   |" << std::endl
            << "|_______________________________________________________________|" << std::endl
            << "|              [9] Статистика про вантажообіг складу            |" << std::endl
            << "|_______________________________________________________________|" << std::endl
            << "|                   [10] Повний фінансовий звіт                 |" << std::endl
            << "|_______________________________________________________________|" << std::endl
            << "|                 [11] Дані про витрати і доходи                |" << std::endl
            << "|_______________________________________________________________|" << std::endl
            << "|          [12] Статистика відправленого вантажу                |" << std::endl
            << "|_______________________________________________________________|" << std::endl
            << "|           [13] Рентабельність представництва                  |" << std::endl
            << "|_______________________________________________________________|" << std::endl
            << "|[14]Відсоткове відношення туристів(відпочиваючих до shop-турів)|" << std::endl
            << "|_______________________________________________________________|" << std::endl
            << "|           [15] Відомості про туристів зазначеного рейсу       |" << std::endl
            << "|_______________________________________________________________|" << std::endl
            << "|                   [16] Завершити роботу                       |" << std::endl
            << "|_______________________________________________________________|" << std::endl
            << " _______________________________________________________________" << std::endl
            << endl;


        int input;
        cin >> input;
        cout << endl;

        if (input == 1)
        {

            system("cls");

            cout << " _______________________________________________________________" << std::endl
                << "|                   [1] Список туристів                         |" << std::endl
                << "|_______________________________________________________________|" << std::endl
                << endl;


            touristGroup.printVacationingTourist();
            touristGroup.printCargoTourist();
            touristGroup.printChildTourist();
        }




        if (input == 2)
        {
            bool cycle = true;
            while(cycle)
            {
                string hotel;
                bool found = false;

                system("cls");

                cout << " _______________________________________________________________" << std::endl
                    << "|   [2] Списки на розселення туристів за вказаними готелями     |" << std::endl
                    << "|_______________________________________________________________|" << std::endl
                    << endl;

                cout << "Введіть назву готелю: " << endl;
                cin >> hotel;

                touristGroup.printResettlement(hotel, found);

                if (found)
                {
                    cycle = false;
                }

                else if (!found)
                {
                    cout << "Готелю " << hotel << " не знайдено." << endl;
                    cout << "Бажаєте продовжити? Введіть [0], щоб вийти; [1], щоб продовжити: ";
                    while (true)
                    {
                        int choice;
                        cin >> choice;
                        if (std::cin.fail()) {
                            std::cout << "Помилка! Введіть [0], щоб вийти; [1], щоб продовжити: "; // Це перевірка на те, щоб було введено число, а не символ
                            std::cin.clear();
                            std::cin.ignore(38000, '\n');
                            continue; // щоб не виходити з циклу 439 рядок і продовжити ввід
                        }
                        if (choice == 0)
                        {
                            cycle = false;
                            break; // щоб вийти з циклу 439 рядок
                        }
                        else if (choice == 1)
                        {
                            cycle = true;
                            break; // щоб вийти з циклу 439 рядок
                        }
                        else
                        {
                            cout << "Некоректний ввід. Будь ласка, введіть [0] або [1]: ";
                            continue; // щоб не виходити з циклу 439 рядок і продовжити ввід
                        }
                    }
                }
            }
        }



        if (input == 3)
        {
            bool cycle = true;
            while(cycle)
            {
                system("cls");

                cout << " _______________________________________________________________" << std::endl
                     << "|          [3] Списки туристів, які відвідали Францію           |" << std::endl
                     << "|_______________________________________________________________|" << std::endl
                     << endl;

                string time;
                while(true)
                {
                    cout << "Введіть обраний період перебування(Зима/Весна/Літо/Осінь): " << endl;
                    cin >> time;
                    bool found = false;

                    touristGroup.printVisitorsCountry(time, found);
                    if(found) // якщо введено вибір праивльно то виходим з циклу 478 
                    {
                        cycle = false;
                        break;
                    }
                    if (!found)// якщо введено вибір непраивльно то продовжуєм 478 цикл
                    {
                        cout << "Ви ввели неправильний період." << endl;
                        continue;
                    }
                }
            }
        }



        if (input == 4)
        {
            bool cycle = true;
            while (cycle)
            {
                system("cls");

                cout << " _______________________________________________________________" << std::endl
                    << "|            [4] Відомості про конкретного туриста              |" << std::endl
                    << "|_______________________________________________________________|" << std::endl
                    << endl;

                string name;
                cout << "Введіть прізвище_ім'я: " << endl;
                cin.ignore();
                getline(cin, name);

                bool found = false;

                touristGroup.printTouristInformation(name, found);

                if (found)
                {
                    cycle = false;
                }

                else if (!found)
                {
                    cout << "Туриста з ім'ям \"" << name << "\" не було знайдено." << endl;
                    cout << "Бажаєте продовжити? Введіть [0], щоб вийти; [1], щоб продовжити: ";
                    while (true)
                    {
                        int choice;
                        cin >> choice;
                        if (std::cin.fail()) {
                            std::cout << "Помилка! Введіть [0], щоб вийти; [1], щоб продовжити: "; // Це перевірка на те, щоб було введено число, а не символ
                            std::cin.clear();
                            std::cin.ignore(38000, '\n');
                            continue; // щоб не виходити з циклу 439 рядок і продовжити ввід
                        }
                        if (choice == 0)
                        {
                            cycle = false;
                            break; // щоб вийти з циклу 542 рядок
                        }
                        else if (choice == 1)
                        {
                            cycle = true;
                            break; // щоб вийти з циклу 542 рядок
                        }
                        else
                        {
                            cout << "Некоректний ввід. Будь ласка, введіть [0] або [1]: ";
                            continue; // щоб не виходити з циклу 542 рядок і продовжити ввід
                        }
                    }
                }
            }
        }



        if (input == 5)
        {
            bool cycle = true;
            while(cycle)
            {
                system("cls");
        
                cout << " _______________________________________________________________" << std::endl
                    << "|  [5] Список готелів, у яких проводиться розселення туристів   |" << std::endl
                    << "|_______________________________________________________________|" << std::endl
                    << endl;
        
        
                string hotel;
                cout << "Розселення проводиться в готелях ДжойнАп/АнексТур/КоралТревел. Введіть назву готелю, який вас цікавить: " << endl;
                cin >> hotel;
                bool found = false;

                touristGroup.printHotels(hotel, found);

                if (found)
                {
                    cycle = false;
                }
        
                else if (!found)
                {
                    cout << "Готелю " << hotel << " не знайдено." << endl;
                    cout << "Бажаєте продовжити? Введіть [0], щоб вийти; [1], щоб продовжити: ";
                    while (true)
                    {
                        int choice;
                        cin >> choice;
                        if (std::cin.fail()) {
                            std::cout << "Помилка! Введіть [0], щоб вийти; [1], щоб продовжити: "; // Це перевірка на те, щоб було введено число, а не символ
                            std::cin.clear();
                            std::cin.ignore(38000, '\n');
                            continue; // щоб не виходити з циклу 439 рядок і продовжити ввід
                        }
                        if (choice == 0)
                        {
                            cycle = false;
                            break; // щоб вийти з циклу 599 рядок
                        }
                        else if (choice == 1)
                        {
                            cycle = true;
                            break; // щоб вийти з циклу 599 рядок
                        }
                        else
                        {
                            cout << "Некоректний ввід. Будь ласка, введіть [0] або [1]: ";
                            continue; // щоб не виходити з циклу 599 рядок і продовжити ввід
                        }
                    }
                }
            }
        }
        
        
        
        if (input == 6)
        {
            bool cycle = true;
            while(cycle)
            {
                system("cls");

                cout << " _______________________________________________________________" << std::endl
                    << "|    [6] Загальна кількість туристів, які замовили екскурсію    |" << std::endl
                    << "|_______________________________________________________________|" << std::endl
                    << endl;

                string places;
                cout << "Введіть назву обраної екскурсії: " << endl;
                cin.ignore(38000, '\n');
                getline(cin, places);
                bool found = false;

                int counter = 0;
                for (auto& tourist : touristGroup.getVacationingTourists())
                    if (tourist.getPlaces() == places)
                    {
                        tourist.print();
                        found = true;
                        counter++;
                    }

                if (found)
                {
                    cout << "Кількість туристів, які замовили екскурсії: "
                        << counter << endl;
                    break;
                }

                else if (!found)
                {
                    cout << "Дану екскурсію не замовляли" << endl;
                    cout << "Бажаєте продовжити? Введіть [0], щоб вийти; [1], щоб продовжити: ";
                    while (true)
                    {
                        int choice;
                        cin >> choice;
                        if (std::cin.fail()) {
                            std::cout << "Помилка! Введіть [0], щоб вийти; [1], щоб продовжити: "; // Це перевірка на те, щоб було введено число, а не символ
                            std::cin.clear();
                            std::cin.ignore(38000, '\n');
                            continue; // щоб не виходити з циклу 439 рядок і продовжити ввід
                        }
                        if (choice == 0)
                        {
                            cycle = false;
                            break; // щоб вийти з циклу 599 рядок
                        }
                        else if (choice == 1)
                        {
                            cycle = true;
                            break; // щоб вийти з циклу 599 рядок
                        }
                        else
                        {
                            cout << "Некоректний ввід. Будь ласка, введіть [0] або [1]: ";
                            continue; // щоб не виходити з циклу 599 рядок і продовжити ввід
                        }
                    }
                }
            }
        }



        if (input == 7)
        {
            system("cls");

            cout << " ________________________________________________________________" << std::endl
                << "|[7] Найпопулярніші екскурсії та найякісніші екскурсійні агентства|" << std::endl
                << "|_________________________________________________________________|" << std::endl
                << endl;

            touristGroup.printAgencies();
        }



        if (input == 8)
        {
            bool cycle = true;
            while (cycle)
            {
                system("cls");

                cout << " _______________________________________________________________" << std::endl
                    << "|               [8] Дані про завантаження рейсу                 |" << std::endl
                    << "|_______________________________________________________________|" << std::endl
                    << endl;


                int number;
                cout << "Введіть номер рейсу: " << endl;
                cin >> number;
                bool found = false;

                touristGroup.printFlight(number, found);
                if (found)
                {
                    cycle = false;
                }

                else if (!found)
                {
                    cout << "Рейсу за номером " << number << " не знайдено." << endl;
                    cout << "Бажаєте продовжити? Введіть [0], щоб вийти; [1], щоб продовжити: ";
                    while (true)
                    {
                        int choice;
                        cin >> choice;
                        if (std::cin.fail()) {
                            std::cout << "Помилка! Введіть [0], щоб вийти; [1], щоб продовжити: "; // Це перевірка на те, щоб було введено число, а не символ
                            std::cin.clear();
                            std::cin.ignore(32323, '\n');
                            continue; // щоб не виходити з циклу 439 рядок і продовжити ввід
                        }
                        if (choice == 0)
                        {
                            cycle = false;
                            break; // щоб вийти з циклу 701 рядок
                        }
                        else if (choice == 1)
                        {
                            cycle = true;
                            break; // щоб вийти з циклу 701 рядок
                        }
                        else
                        {
                            cout << "Некоректний ввід. Будь ласка, введіть [0] або [1]: ";
                            continue; // щоб не виходити з циклу 701 рядок і продовжити ввід
                        }
                    }
                }
            }
        }



        if (input == 9)
        {

            system("cls");

            cout << " _______________________________________________________________" << std::endl
                << "|            [9] Статистика про вантажообіг складу              |" << std::endl
                << "|_______________________________________________________________|" << std::endl
                << endl;

            storage.print();
        }



        if (input == 10)
        {
            bool cycle = true;
            while(cycle)
            {
                system("cls");

                cout << " _______________________________________________________________" << std::endl
                    << "|                 [10] Повний фінансовий звіт                   |" << std::endl
                    << "|_______________________________________________________________|" << std::endl
                    << endl;

                string group;
                cout << "Введіть номер групи: " << endl;
                cin.ignore();
                getline(cin, group);
                bool found = false;

                touristGroup.printReport(group, found);

                if (found)
                {
                    cycle = false;
                }

                else if (!found)
                {
                    cout << "Групи за номером " << group << " не знайдено." << endl;
                    cout << "Бажаєте продовжити? Введіть [0], щоб вийти; [1], щоб продовжити: ";
                    while (true)
                    {
                        int choice;
                        cin >> choice;
                        if (std::cin.fail()) {
                            std::cout << "Помилка! Введіть [0], щоб вийти; [1], щоб продовжити: "; // Це перевірка на те, щоб було введено число, а не символ
                            std::cin.clear();
                            std::cin.ignore(32323, '\n');
                            continue; // щоб не виходити з циклу 439 рядок і продовжити ввід
                        }
                        if (choice == 0)
                        {
                            cycle = false;
                            break; // щоб вийти з циклу 775 рядок
                        }
                        else if (choice == 1)
                        {
                            cycle = true;
                            break; // щоб вийти з циклу 775 рядок
                        }
                        else
                        {
                            cout << "Некоректний ввід. Будь ласка, введіть [0] або [1]: ";
                            continue; // щоб не виходити з циклу 701 рядок і продовжити ввід
                        }
                    }
                }
            }
        }



        if (input == 11)
        {
            bool cycle = true;
            while(cycle)
            {
                system("cls");

                cout << " _______________________________________________________________" << std::endl
                    << "|               [11] Дані про витрати і доходи                  |" << std::endl
                    << "|_______________________________________________________________|" << std::endl
                    << endl;

                string hour;
                cout << "Оберіть пору року(Зима/Весна/Літо/Осінь):" << endl;
                cin >> hour;

                string name;
                cout << "Введіть назву представництва (агенції): " << endl;
                cin >> name;
                bool found = false;

                touristGroup.printExpensesAndIncome(hour, name, found);

                if (found)
                {
                    cycle = false;
                }

                else if (!found)
                {
                    cout << "Не знайдено витрати та доходи предстаництива за даний період." << endl;
                    cout << "Бажаєте продовжити? Введіть [0], щоб вийти; [1], щоб продовжити: ";
                    while (true)
                    {
                        int choice;
                        cin >> choice;
                        if (std::cin.fail()) {
                            std::cout << "Помилка! Введіть [0], щоб вийти; [1], щоб продовжити: "; // Це перевірка на те, щоб було введено число, а не символ
                            std::cin.clear();
                            std::cin.ignore(32323, '\n');
                            continue; // щоб не виходити з циклу 439 рядок і продовжити ввід
                        }
                        if (choice == 0)
                        {
                            cycle = false;
                            break; // щоб вийти з циклу 775 рядок
                        }
                        else if (choice == 1)
                        {
                            cycle = true;
                            break; // щоб вийти з циклу 775 рядок
                        }
                        else
                        {
                            cout << "Некоректний ввід. Будь ласка, введіть [0] або [1]: ";
                            continue; // щоб не виходити з циклу 701 рядок і продовжити ввід
                        }
                    }
                }
            }
        }



        if (input == 12)
        {
            system("cls");

            cout << " _______________________________________________________________" << std::endl
                << "|             [12] Статистика відправленого вантажу             |" << std::endl
                << "|_______________________________________________________________|" << std::endl
                << endl;

            touristGroup.printSentCargo();
        }



        if (input == 13)
        {
            bool cycle = true;
            while(cycle)
            {
                system("cls");

                cout << " _______________________________________________________________" << std::endl
                    << "|          [13] Рентабельність представництва                   |" << std::endl
                    << "|_______________________________________________________________|" << std::endl
                    << endl;

                string name;
                cout << "Введіть назву агенції: " << endl;
                cin >> name;
                bool found = false;

                touristGroup.printFirmRentability(name, found);

                if (found)
                {
                    cycle = false;
                }

                else if (!found)
                {
                    cout << "Представництва " << name << " не знайдено." << endl;
                    cout << "Бажаєте продовжити? Введіть [0], щоб вийти; [1], щоб продовжити: ";
                    while (true)
                    {
                        int choice;
                        cin >> choice;
                        if (std::cin.fail()) {
                            std::cout << "Помилка! Введіть [0], щоб вийти; [1], щоб продовжити: "; // Це перевірка на те, щоб було введено число, а не символ
                            std::cin.clear();
                            std::cin.ignore(32323, '\n');
                            continue; // щоб не виходити з циклу 439 рядок і продовжити ввід
                        }
                        if (choice == 0)
                        {
                            cycle = false;
                            break; // щоб вийти з циклу 775 рядок
                        }
                        else if (choice == 1)
                        {
                            cycle = true;
                            break; // щоб вийти з циклу 775 рядок
                        }
                        else
                        {
                            cout << "Некоректний ввід. Будь ласка, введіть [0] або [1]: ";
                            continue; // щоб не виходити з циклу 701 рядок і продовжити ввід
                        }
                    }
                }
            }
        }



        if (input == 14)
        {
            bool cycle = true;
            while (cycle)
            {
                system("cls");

                cout << " ________________________________________________________________" << std::endl
                    << "|[14] Відсоткове відношення туристів (відпочиваючих до shop-турів)|" << std::endl
                    << "|_________________________________________________________________|" << std::endl
                    << endl;

                string time;
                while (true)
                {
                    cout << "Введіть пору року(Зима/Весна/Літо/Осінь): " << endl;
                    cin >> time;
                    bool found = false;

                    auto counter_shop = 0,
                        counter_resting = 0;

                    for (auto& tourist : touristGroup.getCargoTourists())
                    {
                        if (tourist.getTime() == time)
                        {
                            counter_shop++;
                            found = true;
                            cycle = false;
                        }
                    }

                    for (auto& tourist : touristGroup.getVacationingTourists())
                    {
                        if (tourist.getTime() == time)
                        {
                            counter_resting++;
                            found = true;
                            cycle = false;
                        }
                    }

                    if (found)
                    {
                        cout << "Відношення туристів Відпочиваючих до Шоп-турів (%): "
                            << static_cast<double>(counter_resting) / (counter_shop) << endl;
                        break;
                    }

                    else if (!found)// якщо введено вибір непраивльно то продовжуєм 478 цикл
                    {
                        cout << "Ви ввели неправильний період." << endl;
                        continue;
                    }
                }
            }
        }



        if (input == 15)
        {
            bool cycle = true;
            while(cycle)
            {
                system("cls");

                cout << " _______________________________________________________________" << std::endl
                    << "|         [15] Відомості про туристів зазначеного рейсу         |" << std::endl
                    << "|_______________________________________________________________|" << std::endl
                    << endl;


                int race;
                cout << "Введіть номер рейсу: " << endl;
                cin >> race;
                bool found = false;

                touristGroup.printRaceInformation(race, found);

                if(found)
                {
                    cycle = false;
                }

                else if (!found)
                {
                    cout << "Рейсу за номером " << race << " не знайдено." << endl;
                    cout << "Бажаєте продовжити? Введіть [0], щоб вийти; [1], щоб продовжити: ";
                    while (true)
                    {
                        int choice;
                        cin >> choice;
                        if (std::cin.fail()) {
                            std::cout << "Помилка! Введіть [0], щоб вийти; [1], щоб продовжити: "; // Це перевірка на те, щоб було введено число, а не символ
                            std::cin.clear();
                            std::cin.ignore(32323, '\n');
                            continue; // щоб не виходити з циклу 439 рядок і продовжити ввід
                        }
                        if (choice == 0)
                        {
                            cycle = false;
                            break; // щоб вийти з циклу 990 рядок
                        }
                        else if (choice == 1)
                        {
                            cycle = true;
                            break; // щоб вийти з циклу 990 рядок
                        }
                        else
                        {
                            cout << "Некоректний ввід. Будь ласка, введіть [0] або [1]: ";
                            continue; // щоб не виходити з циклу 990 рядок і продовжити ввід
                        }
                    }
                }
            }
        }



        if (input == 16)
        {
            system("cls");

            cout << " _______________________________________________________________" << std::endl
                << "|                 [16] Завершити роботу                         |" << std::endl
                << "|_______________________________________________________________|" << std::endl
                << endl;



            running = false;



        }



        system("pause>nul");
    }
}
