#ifndef EVENT_H
#define EVENT_H 1
void Event_None();

class EventType {
	EventType();
	EventType(void (*f)(),int i);
	void (*func)();
	int id;
};



#endif

