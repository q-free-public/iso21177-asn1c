/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "EtsiTs102941TrustLists"
 * 	found in "../../asn1/../ttcn/AtsPki/lib/asn1/EtsiTs102941TrustLists.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "HashedId8.h"
#include "DcDelete.h"
#include <constr_CHOICE.h>
#ifndef	_CtlDelete_H_
#define	_CtlDelete_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CtlDelete_PR {
	CtlDelete_PR_NOTHING,	/* No components present */
	CtlDelete_PR_cert,
	CtlDelete_PR_dc
	/* Extensions may appear below */
	
} CtlDelete_PR;

/* CtlDelete */
typedef struct CtlDelete {
	CtlDelete_PR present;
	union CtlDelete_u {
		HashedId8_t	 cert;
		DcDelete_t	 dc;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CtlDelete_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CtlDelete;
extern asn_CHOICE_specifics_t asn_SPC_CtlDelete_specs_1;
extern asn_TYPE_member_t asn_MBR_CtlDelete_1[2];
extern asn_per_constraints_t asn_PER_type_CtlDelete_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _CtlDelete_H_ */
#include <asn_internal.h>