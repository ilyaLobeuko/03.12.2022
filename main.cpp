#include <SFML/Graphics.hpp>

using namespace sf;
const float WINDOW_WIDTH = 800;
const float WINDOW_HEIGHT = 600;
const std::string WINDOW_TITLE = "SFML Lesson2";
const float batWidth = 20.f;
const float batHeight = 80.f;
const float batOffset = 50.f;
const Vector2f batSize(20.f, 80.f);
const Color leftBatColor{ 124,231,123 };
const Color rightBatColor{ 124,45,123 };
int main()
{
	// ������, �������, ����������, �������� ������� ����� ����������
	RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE);
	RectangleShape leftBat;
	leftBat.setSize(batSize);
	leftBat.setPosition(50, 260);
	leftBat.setFillColor(leftBatColor);
	RectangleShape rightBat;
	rightBat.setSize(Vector2f(20.f, 80.f));
	rightBat.setPosition(730, 260);
	rightBat.setFillColor(Color{ 124,45,123 });

	// ������� ���� ����������. �����������, ���� ������� ����
	while (window.isOpen())
	{
		// ������������ ������� ������� � �����
		Event event;
		while (window.pollEvent(event))
		{
			// ������������ ����� �� �������� � ����� ������� ����? 
			if (event.type == Event::Closed)
				// ����� ��������� ���
				window.close();
		}
		// ��������� ���� 
		window.display();
		window.draw(square);
		window.draw(square2);
	}

	return 0;
}