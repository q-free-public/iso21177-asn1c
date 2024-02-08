/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2"
 * 	found in "../../asn1/../ttcn/AtsSecurity/lib/asn1/ieee1609dot2/Ieee1609Dot2.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_CHOICE.h>
#ifndef	_HashedData_H_
#define	_HashedData_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HashedData_PR {
	HashedData_PR_NOTHING,	/* No components present */
	HashedData_PR_sha256HashedData,
	/* Extensions may appear below */
	HashedData_PR_sha384HashedData,
	HashedData_PR_reserved
} HashedData_PR;

/* HashedData */
typedef struct HashedData {
	HashedData_PR present;
	union HashedData_u {
		OCTET_STRING_t	 sha256HashedData;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		OCTET_STRING_t	 sha384HashedData;
		OCTET_STRING_t	 reserved;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HashedData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HashedData;
extern asn_CHOICE_specifics_t asn_SPC_HashedData_specs_1;
extern asn_TYPE_member_t asn_MBR_HashedData_1[3];
extern asn_per_constraints_t asn_PER_type_HashedData_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _HashedData_H_ */
#include <asn_internal.h>
