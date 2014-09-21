#ifndef APP_H
#define APP_H

class App {
private:
	bool m_running;
	int m_userInput;
	enum {
		INSERT,
		PRINT_IN_ORDER,
		PRINT_PRE_ORDER,
		PRINT_POST_ORDER
	};
public:
	App() : m_running(false), m_userInput(0) {}
	void quit() {
		m_running = false;
	}
	void start();
};

#endif