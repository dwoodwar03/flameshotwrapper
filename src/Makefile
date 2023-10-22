SHELL = /bin/sh

CC = gcc
CFLAGS = -Wall
INSTALL_DIR = ~/bin
APP_LAUNCHER_DIR = ~/.local/share/applications
APP_STARTUP_DIR = ~/.config/autostart

.SUFFIXES:
.SUFFIXES: .c .o

.PHONY: help
help:
	@echo "Manage FlameSHotFix Builds"
	@echo "--------------------------"
	@echo
	@echo "flameshotfix - Compile Software"
	@echo "clean        - Clean local environment"
	@echo "deploy       - Deploy code to current user with auto startup"
	@echo "undeploy     - remove the deployed application from current user"

flameshotfix: flameshotfix.o
	$(CC) -o $@ $<

flameshotfix.o: flameshotfix.c
	$(CC) -I. -I$(srcdir) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm *.o

.PHONY: deploy
deploy: flameshotfix
	install -d $(INSTALL_DIR)
	install -d $(APP_LAUNCHER_DIR)
	install -d $(APP_STARTUP_DIR)

	install flameshotfix $(INSTALL_DIR)
	install org.flameshot.FlameshotFix.desktop $(APP_LAUNCHER_DIR)
	install FlameShotFix.desktop $(APP_STARTUP_DIR)


.PHONY: undeploy
undeploy:
	rm $(INSTALL_DIR)/flameshotfix
	rm $(APP_LAUNCHER_DIR)/org.flameshot.FlameshotFix.desktop
	rm $(APP_STARTUP_DIR)/FlameShotFix.desktop



