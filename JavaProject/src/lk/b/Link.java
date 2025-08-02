package lk.b;

public class Link {
    public Person item;
    public Link next;
    public Link(Person item) {
        this.item = item;
    }
    public String toString() {
        return item.toString();
    }
}
