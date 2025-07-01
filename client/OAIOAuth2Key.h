/**
 * Discord HTTP API (Preview) - REST API Client
 * Preview of the Discord v10 HTTP API specification. See https://discord.com/developers/docs for more details.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 10
 * - **Modified**: 2025-07-01T06:33:49.033017897Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Discord HTTP API (Preview) service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

/*
 * OAIOAuth2Key.h
 *
 * 
 */

#ifndef OAIOAuth2Key_H
#define OAIOAuth2Key_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {

class OAIOAuth2Key : public OAIObject {
public:
    OAIOAuth2Key();
    OAIOAuth2Key(QString json);
    ~OAIOAuth2Key() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getKty() const;
    void setKty(const QString &kty);
    bool is_kty_Set() const;
    bool is_kty_Valid() const;

    QString getUse() const;
    void setUse(const QString &use);
    bool is_use_Set() const;
    bool is_use_Valid() const;

    QString getKid() const;
    void setKid(const QString &kid);
    bool is_kid_Set() const;
    bool is_kid_Valid() const;

    QString getN() const;
    void setN(const QString &n);
    bool is_n_Set() const;
    bool is_n_Valid() const;

    QString getE() const;
    void setE(const QString &e);
    bool is_e_Set() const;
    bool is_e_Valid() const;

    QString getAlg() const;
    void setAlg(const QString &alg);
    bool is_alg_Set() const;
    bool is_alg_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_kty;
    bool m_kty_isSet;
    bool m_kty_isValid;

    QString m_use;
    bool m_use_isSet;
    bool m_use_isValid;

    QString m_kid;
    bool m_kid_isSet;
    bool m_kid_isValid;

    QString m_n;
    bool m_n_isSet;
    bool m_n_isValid;

    QString m_e;
    bool m_e_isSet;
    bool m_e_isValid;

    QString m_alg;
    bool m_alg_isSet;
    bool m_alg_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIOAuth2Key)

#endif // OAIOAuth2Key_H
