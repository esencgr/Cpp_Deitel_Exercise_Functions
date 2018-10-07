.PHONY: clean All

All:
	@echo "----------Building project:[ activity_area - Debug ]----------"
	@cd "activity_area" && "$(MAKE)" -f  "activity_area.mk"
clean:
	@echo "----------Cleaning project:[ activity_area - Debug ]----------"
	@cd "activity_area" && "$(MAKE)" -f  "activity_area.mk" clean
