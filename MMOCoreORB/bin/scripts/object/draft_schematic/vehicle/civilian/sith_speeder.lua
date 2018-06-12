object_draft_schematic_vehicle_civilian_sith_speeder = object_draft_schematic_vehicle_civilian_shared_sith_speeder:new {

	templateType = DRAFTSCHEMATIC,

	customObjectName = "Sith Speeder",

	craftingToolTab = 16, -- (See DraftSchematicObjectTemplate.h)
	complexity = 1,
	size = 1,
	factoryCrateSize = 0,

	xpType = "crafting_general",
	xp = 1600,

	assemblySkill = "general_assembly",
	experimentingSkill = "general_experimentation",
	customizationSkill = "clothing_customization",

	customizationOptions = {},
	customizationStringNames = {},
	customizationDefaults = {},

	ingredientTemplateNames = {"craft_vehicle_ingredients_n", "craft_vehicle_ingredients_n", "craft_vehicle_ingredients_n", "craft_vehicle_ingredients_n", "craft_vehicle_ingredients_n", "craft_vehicle_ingredients_n"},
	ingredientTitleNames = {"vehicle_body", "structural_frame", "stabilizor_subframe", "avionic_subassembly", "repulsor_assembly", "cockpit_fitout"},
	ingredientSlotType = {0, 0, 0, 0, 0, 0},
	resourceTypes = {"aluminum_titanium", "metal_ferrous", "aluminum_linksteel", "aluminum_linksteel", "fiberplast_lok", "steel_carbonite"},
	resourceQuantities = {2650, 8950, 3220, 1840, 3650, 1250},
	contribution = {100, 100, 100, 100, 100, 100},

	targetTemplate = "object/tangible/deed/vehicle_deed/vehicle_deed_sith_speeder.iff",

	additionalTemplates = {}
}
ObjectTemplates:addTemplate(object_draft_schematic_vehicle_civilian_sith_speeder, "object/draft_schematic/vehicle/civilian/sith_speeder.iff")
