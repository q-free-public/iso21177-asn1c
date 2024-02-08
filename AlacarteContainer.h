/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "DENM-PDU-Descriptions"
 * 	found in "../../asn1/../ttcn/AtsDENM/lib/asn1/DENM_PDU_Descriptions.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "LanePosition.h"
#include "ITS-Container_Temperature.h"
#include "PositioningSolutionType.h"
#include <constr_SEQUENCE.h>
#ifndef	_AlacarteContainer_H_
#define	_AlacarteContainer_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ImpactReductionContainer;
struct RoadWorksContainerExtended;
struct StationaryVehicleContainer;

/* AlacarteContainer */
typedef struct AlacarteContainer {
	LanePosition_t	*lanePosition;	/* OPTIONAL */
	struct ImpactReductionContainer	*impactReduction;	/* OPTIONAL */
	ITS_Container_Temperature_t	*externalTemperature;	/* OPTIONAL */
	struct RoadWorksContainerExtended	*roadWorks;	/* OPTIONAL */
	PositioningSolutionType_t	*positioningSolution;	/* OPTIONAL */
	struct StationaryVehicleContainer	*stationaryVehicle;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AlacarteContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AlacarteContainer;
extern asn_SEQUENCE_specifics_t asn_SPC_AlacarteContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_AlacarteContainer_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ImpactReductionContainer.h"
#include "RoadWorksContainerExtended.h"
#include "StationaryVehicleContainer.h"

#endif	/* _AlacarteContainer_H_ */
#include <asn_internal.h>
