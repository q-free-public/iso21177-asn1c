/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "../../asn1/../ttcn/../build/asn1/ISO_TS_19321/IVI.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include <constr_SEQUENCE.h>
#ifndef	_TractorCharacteristics_H_
#define	_TractorCharacteristics_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct VehicleCharacteristicsFixValuesList;
struct VehicleCharacteristicsRangesList;

/* TractorCharacteristics */
typedef struct TractorCharacteristics {
	struct VehicleCharacteristicsFixValuesList	*equalTo;	/* OPTIONAL */
	struct VehicleCharacteristicsFixValuesList	*notEqualTo;	/* OPTIONAL */
	struct VehicleCharacteristicsRangesList	*ranges;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TractorCharacteristics_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TractorCharacteristics;
extern asn_SEQUENCE_specifics_t asn_SPC_TractorCharacteristics_specs_1;
extern asn_TYPE_member_t asn_MBR_TractorCharacteristics_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "VehicleCharacteristicsFixValuesList.h"
#include "VehicleCharacteristicsRangesList.h"

#endif	/* _TractorCharacteristics_H_ */
#include <asn_internal.h>
