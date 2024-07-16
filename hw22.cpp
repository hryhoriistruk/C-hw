//1.Припустимо, що є дві вулиці, що перетинаються, з двостороннім рухом, світлофорами і пішохідними переходами. Потрібно створити віртуальну модель, щоб визначити, чи дозволить зміна частоти подачі сигналу світлофора зробити дорожній рух рівномірнішим. Які об'єкти та які класи будуть потрібні для імітації цієї ситуації?
//#include <iostream>
//#include <vector>
//
//class TrafficLight {
//public:
//    void setFrequency(int frequency) {
//        frequency_ = frequency;
//    }
//
//    int getFrequency() const {
//        return frequency_;
//    }
//
//private:
//    int frequency_;
//};
//
//class PedestrianCrossing {
//public:
//    void activateCrossing() {
//        std::cout << "Pedestrian crossing activated." << std::endl;
//    }
//};
//
//class Street {
//public:
//    Street(TrafficLight& traffic_light, PedestrianCrossing& pedestrian_crossing) : traffic_light_(traffic_light), pedestrian_crossing_(pedestrian_crossing) {}
//
//    void adjustTraffic() {
//        int currentFrequency = traffic_light_.getFrequency();
//        if (currentFrequency > 5) {
//            pedestrian_crossing_.activateCrossing();
//        }
//    }
//
//private:
//    TrafficLight& traffic_light_;
//    PedestrianCrossing& pedestrian_crossing_;
//};
//
//int main() {
//    TrafficLight trafficLight;
//    trafficLight.setFrequency(10);
//
//    PedestrianCrossing pedestrianCrossing;
//
//    Street street(trafficLight, pedestrianCrossing);
//    street.adjustTraffic();
//
//    return 0;
//}
//2.Ускладнимо ситуацію з вправи 1. Припустимо, що є три види водіїв: таксисти, які переїжджають перехід на червоне світло; не місцеві, які їдуть повільно та обережно; і місцеві, які ведуть машини по-різному, залежно від уявлень про свою "крутість". Також є два типи пішоходів: місцеві, які переходять вулицю, де їм заманеться, і туристи, які переходять вулицю тільки на зелене світло. А крім того, є ще велосипедисти, які поводяться то як пішоходи, то як водії. Як ці міркування змінять модель?
//#include <iostream>
//#include <vector>
//
//class TrafficLight {
//public:
//    void setFrequency(int frequency) {
//        frequency_ = frequency;
//    }
//
//    int getFrequency() const {
//        return frequency_;
//    }
//
//private:
//    int frequency_;
//};
//
//class PedestrianCrossing {
//public:
//    void activateCrossing() {
//        std::cout << "Pedestrian crossing activated." << std::endl;
//    }
//};
//
//class Driver {
//public:
//    virtual void drive() = 0;
//};
//
//class TaxiDriver : public Driver {
//public:
//    void drive() override {
//        std::cout << "Taxi driver crosses on red light." << std::endl;
//    }
//};
//
//class NonLocalDriver : public Driver {
//public:
//    void drive() override {
//        std::cout << "Non-local driver drives slowly and cautiously." << std::endl;
//    }
//};
//
//class LocalDriver : public Driver {
//public:
//    void drive() override {
//        std::cout << "Local driver drives according to their 'coolness'." << std::endl;
//    }
//};
//
//class Pedestrian {
//public:
//    virtual void crossStreet() = 0;
//};
//
//class LocalPedestrian : public Pedestrian {
//public:
//    void crossStreet() override {
//        std::cout << "Local pedestrian crosses the street as they wish." << std::endl;
//    }
//};
//
//class TouristPedestrian : public Pedestrian {
//public:
//    void crossStreet() override {
//        std::cout << "Tourist pedestrian crosses the street only on green light." << std::endl;
//    }
//};
//
//class Cyclist : public Pedestrian, public Driver {
//public:
//    void drive() override {
//        std::cout << "Cyclist behaves as a pedestrian or a driver." << std::endl;
//    }
//
//    void crossStreet() override {
//        std::cout << "Cyclist crosses the street like a pedestrian or a driver." << std::endl;
//    }
//};
//
//class Street {
//public:
//    Street(TrafficLight& traffic_light, PedestrianCrossing& pedestrian_crossing) : traffic_light_(traffic_light), pedestrian_crossing_(pedestrian_crossing) {}
//
//    void adjustTraffic(Driver& driver) {
//        int currentFrequency = traffic_light_.getFrequency();
//        if (currentFrequency > 5) {
//            driver.drive();
//            pedestrian_crossing_.activateCrossing();
//        }
//    }
//
//private:
//    TrafficLight& traffic_light_;
//    PedestrianCrossing& pedestrian_crossing_;
//};
//
//int main() {
//    TrafficLight trafficLight;
//    trafficLight.setFrequency(10);
//
//    PedestrianCrossing pedestrianCrossing;
//
//    Street street(trafficLight, pedestrianCrossing);
//
//    TaxiDriver taxiDriver;
//    street.adjustTraffic(taxiDriver);
//
//    NonLocalDriver nonLocalDriver;
//    street.adjustTraffic(nonLocalDriver);
//
//    LocalDriver localDriver;
//    street.adjustTraffic(localDriver);
//
//    LocalPedestrian localPedestrian;
//    localPedestrian.crossStreet();
//
//    TouristPedestrian touristPedestrian;
//    touristPedestrian.crossStreet();
//
//    Cyclist cyclist;
//    cyclist.drive();
//    cyclist.crossStreet();
//
//    return 0;
//}
//3.Вам замовили програму планування часу конференцій та зустрічей, а також бронювання місць у готелі для відвідувачів компанії та учасників конференцій. Визначте основні підсистеми.
//Підсистема керування конференціями та зустрічами:
//Модуль реєстрації учасників
//        Модуль планування розкладу подій
//        Модуль взаємодії з користувачем через консольний або графічний інтерфейс
//Підсистема роботи з даними:
//Модуль для збереження та обробки даних про учасників, події та готельні бронювання
//        Модуль для зчитування та запису даних у файли або базу даних
//Підсистема бронювання готелів:
//Модуль для пошуку готелів та вільних номерів
//        Модуль для бронювання готельних номерів
//Модуль для підтвердження та скасування бронювань
//Підсистема користувацького інтерфейсу:
//Модуль для взаємодії з користувачем через консольний або графічний інтерфейс
//Модуль для відображення розкладу подій, вибору готелів та іншої інформації користувачам
//Підсистема обробки та аналізу даних:
//Модуль для генерації звітів про учасників, витрати та інші статистичні дані
//Модуль для аналізу даних та покращення процесів планування
//Підсистема оптимізації та швидкодії:
//Модуль для оптимізації алгоритмів роботи з даними та пошуку оптимальних рішень
//        Модуль для підвищення швидкодії програми та зменшення витрат ресурсів

//Використання структур або класів для представлення учасників, подій, готелів та бронювань.
//Функції та методи:
//Написання функцій для обробки даних, наприклад, реєстрації учасників, пошуку готелів, бронювання місць та іншого.
//Модульність:
//Розділення функціоналу на окремі модулі для кращої організації та керованості кодом.
//Робота з файлами або базою даних:
//Зчитування та запис даних в файли або базу даних для збереження інформації про учасників, події та бронювання.
//Користувацький інтерфейс:
//Реалізація консольного або графічного інтерфейсу для взаємодії з користувачем.
//Обробка помилок та винятків:
//Додавання обробки помилок та винятків для забезпечення надійності програми.
//Оптимізація та швидкодія:
//Використання ефективних алгоритмів та оптимізація коду для покращення швидкодії програми.
//Бібліотеки для роботи з датами та часом:
//Boost.Date_Time: Допомагає у роботі з датами та часом.
//std::chrono: Стандартна бібліотека для роботи з часом у C++.
//Бібліотеки для взаємодії з користувачем:
//Qt: Платформонезалежна бібліотека для створення графічних інтерфейсів.
//ncurses: Бібліотека для створення консольних інтерфейсів.
//Бібліотеки для роботи з базами даних:
//SQLite: Легка вбудовувана база даних, яку можна використовувати для збереження даних про учасників, події та бронювання.
//MySQL Connector/C++: Для взаємодії з MySQL базою даних.
//Бібліотеки для роботи з файлами:
//std::fstream: Стандартна бібліотека для роботи з файлами у C++.
//Boost.Filesystem: Допомагає в управлінні файловою системою.
//Бібліотеки для оптимізації та обробки даних:
//Eigen: Бібліотека для роботи з лінійною алгеброю та матрицями.
//OpenMP: Для паралельного програмування та оптимізації обчислень.
//Бібліотеки для обробки JSON або XML:
//RapidJSON: Швидка бібліотека для роботи з JSON у C++.
//pugixml: Для роботи з XML даними.
//4.Спроектуйте інтерфейси до класів до програми, що ви описали у вправі 3, яка стосується резервування готельних номерів.
#include <iostream>
#include <string>

class Hotel {
private:
    std::string name;
    std::string location;
    int totalRooms;
    int availableRooms;

public:
    Hotel(std::string name, std::string location, int totalRooms) : name(name), location(location), totalRooms(totalRooms), availableRooms(totalRooms) {}

    void displayHotelInfo() {
        std::cout << "Hotel: " << name << std::endl;
        std::cout << "Location: " << location << std::endl;
        std::cout << "Total Rooms: " << totalRooms << std::endl;
        std::cout << "Available Rooms: " << availableRooms << std::endl;
    }

    bool checkAvailability(int numRooms) {
        return availableRooms >= numRooms;
    }

    bool bookRoom(int numRooms) {
        if (availableRooms >= numRooms) {
            availableRooms -= numRooms;
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    Hotel hotel("Example Hotel", "City Center", 50);
    hotel.displayHotelInfo();

    int roomsToBook = 3;
    if (hotel.checkAvailability(roomsToBook)) {
        if (hotel.bookRoom(roomsToBook)) {
            std::cout << "Rooms booked successfully!" << std::endl;
        } else {
            std::cout << "Failed to book rooms. Not enough availability." << std::endl;
        }
    } else {
        std::cout << "Failed to book rooms. Not enough availability." << std::endl;
    }

    hotel.displayHotelInfo();

    return 0;
}
