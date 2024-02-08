/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "../../asn1/../ttcn/../build/asn1/ISO_TS_19321/IVI.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "RoadSegmentReferenceID.h"
#include "IntersectionReferenceID.h"
#include <constr_CHOICE.h>
#ifndef	_MapReference_H_
#define	_MapReference_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MapReference_PR {
	MapReference_PR_NOTHING,	/* No components present */
	MapReference_PR_roadsegment,
	MapReference_PR_intersection
} MapReference_PR;

/* MapReference */
typedef struct MapReference {
	MapReference_PR present;
	union MapReference_u {
		RoadSegmentReferenceID_t	 roadsegment;
		IntersectionReferenceID_t	 intersection;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MapReference_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MapReference;
extern asn_CHOICE_specifics_t asn_SPC_MapReference_specs_1;
extern asn_TYPE_member_t asn_MBR_MapReference_1[2];
extern asn_per_constraints_t asn_PER_type_MapReference_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _MapReference_H_ */
#include <asn_internal.h>
