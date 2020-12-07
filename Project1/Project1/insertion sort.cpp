//#include<iostream>
//#include<SFML/Graphics.hpp>
//#include<limits.h>
//#include<Windows.h>
//#define size 800
//using namespace std;
//
//int random = 0, pass = 1, itr = 0, temp = 0, lim = 799;
//
//struct element {
//	int hei;
//	int pos;
//}num[800];
//
//
//
//int main() {
//	sf::RenderWindow window(sf::VideoMode(800, 600), "Insertion Sort");
//	sf::Event event;
//	sf::Texture f1;
//	sf::Sprite s1;
//	sf::RectangleShape rect;
//	int j;
//
//	f1.loadFromFile("t1.png");
//	s1.setTexture(f1);
//	rect.setPosition(sf::Vector2f(2, 178));
//	rect.setFillColor(sf::Color(255, 0, 0));
//
//	srand(time(NULL));
//	while (window.isOpen()) {
//		while (window.pollEvent(event)) {
//			if (event.type == sf::Event::Closed) {
//				window.close();
//			}
//		}
//
//		if (pass == 1) {
//			for (int i = 0; i < 800; i++) {
//				random = 1 + rand() % 600;
//				num[i].pos = i;
//				num[i].hei = random;
//				if (i == 799) {
//					pass = 2;
//				}
//			}
//		}
//
//		if (pass == 2) {
//			temp = num[itr].hei;
//			j = itr - 1;
//			while ((temp < num[j].hei) && (j >= 0)) {
//				num[j + 1].hei = num[j].hei;
//				j--;
//			}
//			num[j + 1].hei = temp;
//		}
//
//		window.clear(sf::Color::Black);
//		window.draw(s1);
//		for (int i = 0; i < 800; i++) {
//			rect.setFillColor(sf::Color(255, 0, 0));
//			rect.setPosition(num[i].pos, 600);
//			rect.setSize(sf::Vector2f(2, num[i].hei));
//			rect.setRotation(180);
//			window.draw(rect);
//		}
//		window.display();
//		itr++;
//		if (itr >= lim) {
//			itr = 0;
//		}
//	}
//	return 0;
//}