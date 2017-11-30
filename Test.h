#include <iostream>
#include <fstream>
#include "Bus.h"
#include "Truck.h"
#include "PassengerCar.h"
#include "FilesCmp.h"

using namespace std;

class BusTest : public ::testing::Test {
};

TEST_F(BusTest, CheckFuncBusDivisionByZero) {
	bus b;
	b.enginepower = 0;
	b.passengercapacity = 1;
	float expected = 0;
	ASSERT_NEAR(expected, b.Func(), 0.01);
}

TEST_F(BusTest, CheckFuncBus) {
	bus b;
	b.enginepower = 4;
	b.passengercapacity = 2;
	float expected = 37.5;
	ASSERT_NEAR(expected, b.Func(), 0.01);
}

TEST_F(BusTest, CheckInput) {
	ifstream ifst("InBus.txt");
	bus actual;
	actual.InData(ifst);
	bus b;
	b.enginepower = 1;
	b.fuelconsumption = 2.5;
	b.passengercapacity = 3;
	ASSERT_EQ(actual.enginepower, b.enginepower);
	ASSERT_NEAR(actual.fuelconsumption, b.fuelconsumption, 0.01);
	ASSERT_EQ(actual.passengercapacity, b.passengercapacity);
}

TEST_F(BusTest, CheckOutput) {
	ofstream ofst("OutTest.txt");
	bus b;
	b.enginepower = 1;
	b.fuelconsumption = 2.5;
	b.passengercapacity = 3;
	b.Out(ofst);
	ofst.close();

	ifstream expected("OutBus.txt");
	ifstream actual("OutTest.txt");
	bool flag = FilesCmp(expected, actual);
	ASSERT_TRUE(flag);
}

//##########################################################################################################
//##########################################################################################################

class TruckTest : public ::testing::Test {
};

TEST_F(TruckTest, CheckFuncTruckDivisionByZero) {
	truck t;
	t.enginepower = 0;
	t.carryingcapacity = 1;
	float expected = 0;
	ASSERT_NEAR(expected, t.Func(), 0.01);
}

TEST_F(TruckTest, CheckFuncTruck) {
	truck t;
	t.enginepower = 2;
	t.carryingcapacity = 3;
	float expected = 1.5;
	ASSERT_NEAR(expected, t.Func(), 0.01);
}

TEST_F(TruckTest, CheckInput) {
	ifstream ifst("InTruck.txt");
	truck actual;
	actual.InData(ifst);
	truck t;
	t.enginepower = 1;
	t.fuelconsumption = 2.5;
	t.carryingcapacity = 3;
	ASSERT_EQ(actual.enginepower, t.enginepower);
	ASSERT_NEAR(actual.fuelconsumption, t.fuelconsumption, 0.01);
	ASSERT_EQ(actual.carryingcapacity, t.carryingcapacity);
}

TEST_F(TruckTest, CheckOutput) {
	ofstream ofst("OutTest.txt");
	truck t;
	t.enginepower = 1;
	t.fuelconsumption = 2.5;
	t.carryingcapacity = 3;
	t.Out(ofst);
	ofst.close();

	ifstream expected("OutTruck.txt");
	ifstream actual("OutTest.txt");
	bool flag = FilesCmp(expected, actual);
	ASSERT_TRUE(flag);
}

//##########################################################################################################
//##########################################################################################################

class PassengerCarTest : public ::testing::Test {
};

TEST_F(PassengerCarTest, CheckFuncPassengerCarDivisionByZero) {
	passengercar p;
	p.enginepower = 0;
	p.maxspeed = 1;
	float expected = 0;
	ASSERT_NEAR(expected, p.Func(), 0.01);
}

TEST_F(PassengerCarTest, CheckFuncPassengerCar) {
	passengercar p;
	p.enginepower = 2;
	p.maxspeed = 3;
	float expected = 1.5;
	ASSERT_NEAR(expected, p.Func(), 0.01);
}

TEST_F(PassengerCarTest, CheckInput) {
	ifstream ifst("InPassengerCar.txt");
	passengercar actual;
	actual.InData(ifst);
	passengercar p;
	p.enginepower = 1;
	p.fuelconsumption = 2.5;
	p.maxspeed = 3;
	ASSERT_EQ(actual.enginepower, p.enginepower);
	ASSERT_NEAR(actual.fuelconsumption, p.fuelconsumption, 0.01);
	ASSERT_EQ(actual.maxspeed, p.maxspeed);
}

TEST_F(PassengerCarTest, CheckOutput) {
	ofstream ofst("OutTest.txt");
	passengercar p;
	p.enginepower = 1;
	p.fuelconsumption = 2.5;
	p.maxspeed = 3;
	p.Out(ofst);
	ofst.close();

	ifstream expected("OutPassengerCar.txt");
	ifstream actual("OutTest.txt");
	bool flag = FilesCmp(expected, actual);
	ASSERT_TRUE(flag);
}

//##########################################################################################################
//##########################################################################################################

class CarTest : public ::testing::Test {
};

TEST_F(CarTest, CheckInputBus) {
	ifstream ifst("CarInBus.txt");
	car *actual = car::In(ifst);

	bus expected;
	expected.enginepower = 1;
	expected.fuelconsumption = 2.5;

	ASSERT_EQ(actual->enginepower, expected.enginepower);
	ASSERT_NEAR(actual->fuelconsumption, expected.fuelconsumption, 0.01);
}

TEST_F(CarTest, CheckInputTruck) {
	ifstream ifst("CarInTruck.txt");
	car *actual = car::In(ifst);

	truck expected;
	expected.enginepower = 1;
	expected.fuelconsumption = 2.5;

	ASSERT_EQ(actual->enginepower, expected.enginepower);
	ASSERT_NEAR(actual->fuelconsumption, expected.fuelconsumption, 0.01);
}

TEST_F(CarTest, CheckInputPassengerCar) {
	ifstream ifst("CarInPassengerCar.txt");
	car *actual = car::In(ifst);

	passengercar expected;
	expected.enginepower = 1;
	expected.fuelconsumption = 2.5;

	ASSERT_EQ(actual->enginepower, expected.enginepower);
	ASSERT_NEAR(actual->fuelconsumption, expected.fuelconsumption, 0.01);
}

TEST_F(CarTest, CheckCompare) {
	bus *b1 = new bus;
	b1->enginepower = 1;
	b1->passengercapacity = 3;

	bus *b2 = new bus;
	b2->enginepower = 1;
	b2->passengercapacity = 2;

	ASSERT_TRUE(b1->Compare(b2));
}

//#############################################################################################
//#############################################################################################

class ContainerTest : public ::testing::Test {
};

TEST_F(ContainerTest, CheckInitContainer) {
	container c;

	ASSERT_EQ(c.len, 0);
	ASSERT_TRUE(c.cont == NULL);
	ASSERT_TRUE(c.next == NULL);
	ASSERT_TRUE(c.prev == NULL);
}

TEST_F(ContainerTest, CheckClearEmptyContainer) {

	container c;
	c.Clear();

	ASSERT_EQ(c.len, 0);
	ASSERT_TRUE(c.cont == NULL);
	ASSERT_TRUE(c.next == NULL);
	ASSERT_TRUE(c.prev == NULL);
}

TEST_F(ContainerTest, CheckClearContainer) {
	container *c = new container;

	bus *b1 = new bus;
	b1->enginepower = 1;
	b1->passengercapacity = 3;

	car *c1 = b1;
	container *temp;
	temp = new container;
	c->next = temp;
	temp->cont = c1;
	temp->next = NULL;
	temp->prev = c;
	c = temp;
	c->len = 1;
	
	c->Clear();

	ASSERT_EQ(c->len, 0);
	ASSERT_TRUE(c->cont == NULL);
	ASSERT_TRUE(c->next == NULL);
	ASSERT_TRUE(c->prev == NULL);
}

TEST_F(ContainerTest, CheckOutBus) {
	ofstream ofst("OutTest.txt");

	container *c = new container;

	bus *b1 = new bus;
	b1->enginepower = 1;
	b1->fuelconsumption = 2.5;
	b1->passengercapacity = 3;
	car *c1 = b1;
	container *temp;
	temp = new container;
	c->next = temp;
	temp->cont = c1;
	temp->next = NULL;
	temp->prev = c;
	c = temp;

	truck *t1 = new truck;
	t1->enginepower = 1;
	t1->fuelconsumption = 2.5;
	t1->carryingcapacity = 3;
	car *c2 = t1;
	temp = new container;
	c->next = temp;
	temp->cont = c2;
	temp->next = NULL;
	temp->prev = c;
	c = temp;

	passengercar *p1 = new passengercar;
	p1->enginepower = 1;
	p1->fuelconsumption = 2.5;
	p1->maxspeed = 3;
	car *c3 = p1;
	temp = new container;
	c->next = temp;
	temp->cont = c3;
	temp->next = NULL;
	temp->prev = c;
	c = temp;

	c->len = 3;

	c->OutOnlyBus(ofst);
	ofst.close();

	ifstream actual("OutTest.txt");
	ifstream expected("ContainerOutBus.txt");
	bool flag = FilesCmp(expected, actual);
	ASSERT_TRUE(flag);
}

TEST_F(ContainerTest, CheckOutTruck) {
	ofstream ofst("OutTest.txt");

	container *c = new container;

	bus *b1 = new bus;
	b1->enginepower = 1;
	b1->fuelconsumption = 2.5;
	b1->passengercapacity = 3;
	car *c1 = b1;
	container *temp;
	temp = new container;
	c->next = temp;
	temp->cont = c1;
	temp->next = NULL;
	temp->prev = c;
	c = temp;

	truck *t1 = new truck;
	t1->enginepower = 1;
	t1->fuelconsumption = 2.5;
	t1->carryingcapacity = 3;
	car *c2 = t1;
	temp = new container;
	c->next = temp;
	temp->cont = c2;
	temp->next = NULL;
	temp->prev = c;
	c = temp;

	passengercar *p1 = new passengercar;
	p1->enginepower = 1;
	p1->fuelconsumption = 2.5;
	p1->maxspeed = 3;
	car *c3 = p1;
	temp = new container;
	c->next = temp;
	temp->cont = c3;
	temp->next = NULL;
	temp->prev = c;
	c = temp;

	c->len = 3;

	c->OutOnlyTruck(ofst);
	ofst.close();

	ifstream actual("OutTest.txt");
	ifstream expected("ContainerOutTruck.txt");
	bool flag = FilesCmp(expected, actual);
	ASSERT_TRUE(flag);
}

TEST_F(ContainerTest, CheckOutPassengerCar) {
	ofstream ofst("OutTest.txt");

	container *c = new container;

	bus *b1 = new bus;
	b1->enginepower = 1;
	b1->fuelconsumption = 2.5;
	b1->passengercapacity = 3;
	car *c1 = b1;
	container *temp;
	temp = new container;
	c->next = temp;
	temp->cont = c1;
	temp->next = NULL;
	temp->prev = c;
	c = temp;

	truck *t1 = new truck;
	t1->enginepower = 1;
	t1->fuelconsumption = 2.5;
	t1->carryingcapacity = 3;
	car *c2 = t1;
	temp = new container;
	c->next = temp;
	temp->cont = c2;
	temp->next = NULL;
	temp->prev = c;
	c = temp;

	passengercar *p1 = new passengercar;
	p1->enginepower = 1;
	p1->fuelconsumption = 2.5;
	p1->maxspeed = 3;
	car *c3 = p1;
	temp = new container;
	c->next = temp;
	temp->cont = c3;
	temp->next = NULL;
	temp->prev = c;
	c = temp;

	c->len = 3;

	c->OutOnlyPassengerCar(ofst);
	ofst.close();

	ifstream actual("OutTest.txt");
	ifstream expected("ContainerOutPassengerCar.txt");
	bool flag = FilesCmp(expected, actual);
	ASSERT_TRUE(flag);
}

TEST_F(ContainerTest, CheckSort) {
	ofstream ofst("OutTest.txt");

	container *c = new container;

	bus *b1 = new bus;
	b1->enginepower = 1;
	b1->fuelconsumption = 2.5;
	b1->passengercapacity = 3;
	car *c1 = b1;
	container *temp;
	temp = new container;
	c->next = temp;
	temp->cont = c1;
	temp->next = NULL;
	temp->prev = c;
	c = temp;

	truck *t1 = new truck;
	t1->enginepower = 1;
	t1->fuelconsumption = 2.5;
	t1->carryingcapacity = 3;
	car *c2 = t1;
	temp = new container;
	c->next = temp;
	temp->cont = c2;
	temp->next = NULL;
	temp->prev = c;
	c = temp;

	passengercar *p1 = new passengercar;
	p1->enginepower = 1;
	p1->fuelconsumption = 2.5;
	p1->maxspeed = 3;
	car *c3 = p1;
	temp = new container;
	c->next = temp;
	temp->cont = c3;
	temp->next = NULL;
	temp->prev = c;
	c = temp;

	c->len = 3;

	c->Sort();
	c->Out(ofst);
	ofst.close();

	ifstream actual("OutTest.txt");
	ifstream expected("ContainerSort.txt");
	bool flag = FilesCmp(expected, actual);
	ASSERT_TRUE(flag);
}

TEST_F(ContainerTest, CheckSortEmpty) {
	ofstream ofst("OutTest.txt");

	container *c = new container;

	c->Sort();
	c->Out(ofst);
	ofst.close();

	ifstream actual("OutTest.txt");
	ifstream expected("ContainerSortEmpty.txt");
	bool flag = FilesCmp(expected, actual);
	ASSERT_TRUE(flag);
}

TEST_F(ContainerTest, CheckSortEqual) {
	ofstream ofst("OutTest.txt");

	container *c = new container;

	truck *t1 = new truck;
	t1->enginepower = 1;
	t1->fuelconsumption = 2.5;
	t1->carryingcapacity = 3;
	car *c2 = t1;
	container *temp;
	temp = new container;
	c->next = temp;
	temp->cont = c2;
	temp->next = NULL;
	temp->prev = c;
	c = temp;

	passengercar *p1 = new passengercar;
	p1->enginepower = 1;
	p1->fuelconsumption = 2.5;
	p1->maxspeed = 3;
	car *c3 = p1;
	temp = new container;
	c->next = temp;
	temp->cont = c3;
	temp->next = NULL;
	temp->prev = c;
	c = temp;

	c->len = 2;

	c->Sort();
	c->Out(ofst);
	ofst.close();

	ifstream actual("OutTest.txt");
	ifstream expected("ContainerSortEqual.txt");
	bool flag = FilesCmp(expected, actual);
	ASSERT_TRUE(flag);
}

TEST_F(ContainerTest, CheckOut) {
	ofstream ofst("OutTest.txt");

	container *c = new container;

	bus *b1 = new bus;
	b1->enginepower = 1;
	b1->fuelconsumption = 2.5;
	b1->passengercapacity = 3;
	car *c1 = b1;
	container *temp;
	temp = new container;
	c->next = temp;
	temp->cont = c1;
	temp->next = NULL;
	temp->prev = c;
	c = temp;

	truck *t1 = new truck;
	t1->enginepower = 1;
	t1->fuelconsumption = 2.5;
	t1->carryingcapacity = 3;
	car *c2 = t1;
	temp = new container;
	c->next = temp;
	temp->cont = c2;
	temp->next = NULL;
	temp->prev = c;
	c = temp;

	passengercar *p1 = new passengercar;
	p1->enginepower = 1;
	p1->fuelconsumption = 2.5;
	p1->maxspeed = 3;
	car *c3 = p1;
	temp = new container;
	c->next = temp;
	temp->cont = c3;
	temp->next = NULL;
	temp->prev = c;
	c = temp;

	c->len = 3;

	c->Out(ofst);
	ofst.close();

	ifstream actual("OutTest.txt");
	ifstream expected("ContainerOut.txt");
	bool flag = FilesCmp(expected, actual);
	ASSERT_TRUE(flag);
}