/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "../../asn1/../ttcn/../build/asn1/ISO_TS_19321/IVI.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#ifndef	_GeneralIviContainer_H_
#define	_GeneralIviContainer_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GicPart;

/* GeneralIviContainer */
typedef struct GeneralIviContainer {
	A_SEQUENCE_OF(struct GicPart) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GeneralIviContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GeneralIviContainer;
extern asn_SET_OF_specifics_t asn_SPC_GeneralIviContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_GeneralIviContainer_1[1];
extern asn_per_constraints_t asn_PER_type_GeneralIviContainer_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GicPart.h"

#endif	/* _GeneralIviContainer_H_ */
#include <asn_internal.h>
