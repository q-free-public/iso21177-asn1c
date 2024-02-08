/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "../../asn1/../ttcn/../build/asn1/ISO_TS_19321/IVI.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "ZoneIds.h"
#include "Direction.h"
#include <constr_SEQUENCE.h>
#ifndef	_AvcPart_H_
#define	_AvcPart_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ZoneIds;
struct LanePositions;
struct VehicleCharacteristicsList;
struct AutomatedVehicleRules;
struct PlatooningRules;

/* AvcPart */
typedef struct AvcPart {
	struct ZoneIds	*detectionZoneIds;	/* OPTIONAL */
	ZoneIds_t	 relevanceZoneIds;
	Direction_t	*direction;	/* OPTIONAL */
	struct LanePositions	*applicableLanes;	/* OPTIONAL */
	struct VehicleCharacteristicsList	*vehicleCharacteristics;	/* OPTIONAL */
	struct AutomatedVehicleRules	*automatedVehicleRules;	/* OPTIONAL */
	struct PlatooningRules	*platooningRules;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AvcPart_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AvcPart;
extern asn_SEQUENCE_specifics_t asn_SPC_AvcPart_specs_1;
extern asn_TYPE_member_t asn_MBR_AvcPart_1[7];
extern asn_per_constraints_t asn_PER_type_AvcPart_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ZoneIds.h"
#include "LanePositions.h"
#include "VehicleCharacteristicsList.h"
#include "AutomatedVehicleRules.h"
#include "PlatooningRules.h"

#endif	/* _AvcPart_H_ */
#include <asn_internal.h>