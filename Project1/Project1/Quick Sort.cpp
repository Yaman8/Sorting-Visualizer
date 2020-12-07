//#include<iostream>
//#include<SFML/Graphics.hpp>
//#include<limits.h>
//using namespace std;
//
//int random = 0, pass = 1, itr = 0, temp = 0, lim = 799;
//
//struct element {
//	int hei;
//	int pos;
//}num[800];
//
//int partition(element num[800], int beg, int end) {
//	int left, right, loc, flag;
//	loc = left = beg;
//	right = end;
//	flag = 0;
//	while (flag != 1) {
//		while ((num[loc].hei <= num[right].hei) && loc != right)
//			right--;
//		if (loc == right)
//			flag = 1;
//		else if (num[loc].hei > num[right].hei) {
//			temp = num[loc].hei;
//			num[loc].hei = num[right].hei;
//			num[right].hei = temp;
//			loc = right;
//		}
//		if (flag != 1) {
//			while ((num[loc].hei >= num[left].hei) && (loc != left))
//				left++;
//			if (loc = left)
//				flag = 1;
//			else if (num[loc].hei < num[loc].hei) {
//				temp = num[loc].hei;
//				num[loc].hei = num[left].hei;
//				num[left].hei = temp;
//				loc = left;
//			}
//		}
//	}
//	return loc;
//}
//
//void quick(element num[800], int beg, int end) {
//	int loc;
//	if (beg < end) {
//		loc = partition(num, beg, end);
//		quick(num, beg, loc - 1);
//		quick(num, loc + 1, end);
//	}
//}
//
//int main() {
//	sf::RenderWindow window(sf::VideoMode(800, 600), "Quick Sort");
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
//			quick(num, 0, 799);
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
//	}
//	return 0;
//}