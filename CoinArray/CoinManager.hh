

//Creacion de la clase CoinManager


typedef struct coin {
	int posX;
	int posY;
} apuntCoins;

class CoinManager
{
public:
	void coinGenerator(int rows, int columns,int diff);
	void removeCoin(int &posX, int &posY,int diff);
	int coininmap(const apuntCoins **total) const;
	int monedas(int rows,int columns,int diff);
	CoinManager(int &rows, int &cols);

private:
	apuntCoins *coinData;
	int filasMapa;
	int columnasMapa;
	int cantidaddemonedas;
};

