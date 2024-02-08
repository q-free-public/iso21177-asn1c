/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2BaseTypes"
 * 	found in "../../asn1/../ttcn/AtsSecurity/lib/asn1/ieee1609dot2/Ieee1609Dot2BaseTypes.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */


/* Including external dependencies */
#include "Uint16.h"
#include <constr_CHOICE.h>
#ifndef	_Duration_H_
#define	_Duration_H_


#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Duration_PR {
	Duration_PR_NOTHING,	/* No components present */
	Duration_PR_microseconds,
	Duration_PR_milliseconds,
	Duration_PR_seconds,
	Duration_PR_minutes,
	Duration_PR_hours,
	Duration_PR_sixtyHours,
	Duration_PR_years
} Duration_PR;

/* Duration */
typedef struct Duration {
	Duration_PR present;
	union Duration_u {
		Uint16_t	 microseconds;
		Uint16_t	 milliseconds;
		Uint16_t	 seconds;
		Uint16_t	 minutes;
		Uint16_t	 hours;
		Uint16_t	 sixtyHours;
		Uint16_t	 years;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Duration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Duration;
extern asn_CHOICE_specifics_t asn_SPC_Duration_specs_1;
extern asn_TYPE_member_t asn_MBR_Duration_1[7];
extern asn_per_constraints_t asn_PER_type_Duration_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Duration_H_ */
#include <asn_internal.h>
