/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "../../asn1/../ttcn/../build/asn1/ISO_TS_19321/IVI.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#ifndef	_TrailerCharacteristicsRangesList_H_
#define	_TrailerCharacteristicsRangesList_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct VehicleCharacteristicsRanges;

/* TrailerCharacteristicsRangesList */
typedef struct TrailerCharacteristicsRangesList {
	A_SEQUENCE_OF(struct VehicleCharacteristicsRanges) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TrailerCharacteristicsRangesList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TrailerCharacteristicsRangesList;
extern asn_SET_OF_specifics_t asn_SPC_TrailerCharacteristicsRangesList_specs_1;
extern asn_TYPE_member_t asn_MBR_TrailerCharacteristicsRangesList_1[1];
extern asn_per_constraints_t asn_PER_type_TrailerCharacteristicsRangesList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "VehicleCharacteristicsRanges.h"

#endif	/* _TrailerCharacteristicsRangesList_H_ */
#include <asn_internal.h>
