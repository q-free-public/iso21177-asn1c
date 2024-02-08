/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpC"
 * 	found in "../../asn1/../ttcn/AtsIS/lib/asn1/iso-patched/AddGrpC.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "VehicleHeight.h"
#include "VehicleMass.h"
#include <constr_SEQUENCE.h>
#ifndef	_LaneAttributes_addGrpC_H_
#define	_LaneAttributes_addGrpC_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LaneAttributes-addGrpC */
typedef struct LaneAttributes_addGrpC {
	VehicleHeight_t	*maxVehicleHeight;	/* OPTIONAL */
	VehicleMass_t	*maxVehicleWeight;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LaneAttributes_addGrpC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LaneAttributes_addGrpC;
extern asn_SEQUENCE_specifics_t asn_SPC_LaneAttributes_addGrpC_specs_1;
extern asn_TYPE_member_t asn_MBR_LaneAttributes_addGrpC_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LaneAttributes_addGrpC_H_ */
#include <asn_internal.h>