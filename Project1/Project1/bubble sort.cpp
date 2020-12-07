//#include<iostream>
//#include<limits.h>
//#include<SFML/Graphics.hpp>
//
//int random = 0, pass = 1, itr = 0, temp = 0, cont = 0, lim = 399;
//
////declaration of single line
//struct element {
//	int hei;
//	int pos;
//}num[400];
//
//int main() {
//	sf::RenderWindow window(sf::VideoMode(800, 600), "BUBBLE SORT");
//	sf::Event event;
//	sf::Texture f1;
//	sf::Sprite s1;
//	sf::RectangleShape rect;
//
//	f1.loadFromFile("t1.png");
//	s1.setTexture(f1);
//	rect.setPosition(sf::Vector2f(2, 178));
//	rect.setFillColor(sf::Color(255, 0, 0));
//
//	srand(time(NULL));
//
//	while (window.isOpen()) {
//		while (window.pollEvent(event)) {
//			if (event.type == sf::Event::Closed) {
//				window.close();
//			}
//		}
//
//		if (pass == 2) {
//			if (num[itr].hei < num[itr + 1].hei) {
//				temp = num[itr].hei;
//				num[itr].hei = num[itr + 1].hei;
//				num[itr + 1].hei = temp;
//			}
//		}
//		//remaning passes
//
//
//		if (pass == 1) {
//			for (int i = 0; i < 400; i++) {
//				random = 1 + rand() % 600;
//				num[i].pos = i;
//				num[i].hei = random;
//				if (i == 399) {
//					pass = 2;
//				}
//			}
//		}
//		//making lines
//
//		window.clear(sf::Color::Black);
//		window.draw(s1);
//
//		for (int i = 0; i < 400; i++) {
//			rect.setFillColor(sf::Color(255, 0, 0));
//			if (i == itr) {
//				rect.setFillColor(sf::Color(255, 255, 0));
//			}
//			rect.setPosition(num[i].pos, 600);
//			rect.setSize(sf::Vector2f(2, num[i].hei));
//			rect.setRotation(180);
//			window.draw(rect);
//		}
//		window.display();
//		itr++;
//		if (itr >= lim) {
//			itr = 0;
//			lim--;
//		}
//	}
//
//	return 0;
//}