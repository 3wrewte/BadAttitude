#include "event.h"
void Event_None(){}
EventType::EventType(){
	func = Event_None;
}
EventType::EventType(void (*f)(),int i) {
	func = f;
	id = i;
}