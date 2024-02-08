/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2Dot1Protocol"
 * 	found in "../../asn1/../ttcn/AtsPki/lib/asn1/ieee_1609.2.1/Ieee1609Dot2Dot1Protocol.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */

#include "SecurityMgmtPsid.h"

int
SecurityMgmtPsid_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const unsigned long *)sptr;
	
	if((value == 35)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using Psid,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_SecurityMgmtPsid_constr_1 CC_NOTUSED = {
	{ 1, 1 }	/* (35..35) */,
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_SecurityMgmtPsid_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  35,  35 }	/* (35..35) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const ber_tlv_tag_t asn_DEF_SecurityMgmtPsid_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_SecurityMgmtPsid = {
	"SecurityMgmtPsid",
	"SecurityMgmtPsid",
	&asn_OP_NativeInteger,
	asn_DEF_SecurityMgmtPsid_tags_1,
	sizeof(asn_DEF_SecurityMgmtPsid_tags_1)
		/sizeof(asn_DEF_SecurityMgmtPsid_tags_1[0]), /* 1 */
	asn_DEF_SecurityMgmtPsid_tags_1,	/* Same as above */
	sizeof(asn_DEF_SecurityMgmtPsid_tags_1)
		/sizeof(asn_DEF_SecurityMgmtPsid_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_SecurityMgmtPsid_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_SecurityMgmtPsid_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SecurityMgmtPsid_constraint
	},
	0, 0,	/* No members */
	&asn_SPC_Psid_specs_1	/* Additional specs */
};
