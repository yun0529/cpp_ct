package decorator;

public class Milk extends AbstAdding {
    public Milk(IBeverage material) {
        super(material);
    }

    @Override
    public int getTotalPrice (){
        return super.getTotalPrice() + 50; // 부모에 50을 더함
    }
}
