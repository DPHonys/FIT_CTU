package cz.cvut.fit.honysdan.notification;

import com.vaadin.flow.component.notification.Notification;
import com.vaadin.flow.component.notification.NotificationVariant;

public class ErrorNotification {
    public ErrorNotification(String text) {
        Notification notification = new Notification(text, 3000, Notification.Position.BOTTOM_CENTER);
        notification.addThemeVariants(NotificationVariant.LUMO_ERROR);
        notification.open();
    }
}
